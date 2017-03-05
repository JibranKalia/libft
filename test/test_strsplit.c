#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//extern int g_malloc_inject;


#include "libft.h"
#include <stdbool.h>
#include <stdlib.h>

#  define GRD(a, b) do{if(a){return(b);}}while(0)
#  define GRD1(a, b, c) do{if(a){b;return(c);}}while(0)
static void		tbldel(char **tbl)
{
	size_t	i;

	i = 0;
	while (tbl[i])
	{
		free(tbl[i]);
		++i;
	}
	free(tbl);
	tbl = 0;
}

static char		*wrddup(const char *src, char src_x)
{
	int		wrd_len;
	char	*wrd;
	int		j;

	wrd_len = 0;
	while (src[wrd_len] && src[wrd_len] != src_x)
		++wrd_len;
	GRD((wrd = ft_strnew(wrd_len)) == 0, 0);
	j = 0;
	while (j < wrd_len)
	{
		wrd[j] = src[j];
		++j;
	}
	return (wrd);
}

static size_t	wrds(const char *src, char src_x)
{
	size_t	ret;
	bool	flg;

	ret = 0;
	flg = 0;
	while (*src)
	{
		if (*src == src_x)
			flg = 0;
		else
		{
			if (flg == 0)
				++ret;
			flg = 1;
		}
		++src;
	}
	return (ret);
}

char			**strsplit(const char *src, char src_x)
{
	size_t	len;
	char	**tbl;
	size_t	i;
	bool	flg;

	GRD(src == 0, 0);
	len = wrds(src, src_x);
	GRD((tbl = malloc(sizeof(char *) * (len + 1))) == 0, 0);
	i = 0;
	flg = 0;
	while (*src && i < len)
	{
		if (*src == src_x)
			flg = 0;
		else
		{
			if (flg == 0)
				GRD1((tbl[i++] = wrddup(src, src_x)) == 0, tbldel(tbl), 0);
			flg = 1;
		}
		++src;
	}
	return (tbl);
}

int		str_test1(void)
{
	char *s = "      split       this for   me  !       ";
    char **r = ft_strsplit(s, ' ');	
    char **ret = strsplit(s, ' ');	

    while (*r)
    {
        if (strcmp(*r, *ret))
        {
			printf("Str_Split Test1: FAIL\n");
            return (1);
        }
        r++;
        ret++;
    }
	printf("Everything Fine\n");
	return (0);
}

int		str_test2(void)
{
	char *s = "split  ||this|for|me|||||!|";
	int i = 0;
	char **r = ft_strsplit(s, '|');
	char **ret = strsplit(s, '|');

	while (r[i])
	{
		if (strcmp(r[i], *ret))
		{
			printf("Str_Split Test2: FAIL\n");
			return (1);
		}
		i++;
		ret++;
	}
	return (0);
}


int		main(void)
{
	char 	**ret;
	int 	flag = 0;

	//g_malloc_inject = 2;

	char *s = "      split       this for   me  !       ";
	ret = ft_strsplit(s, ' ');
	CHK1(ret == 0, printf("This Failed\n"), 0);

	if (str_test1() == 1)
		flag = 1;
	if (str_test2() == 1)
		flag = 1;
	if (flag == 0)
		printf("Str_Split PASS\n");
    return (0);
}
