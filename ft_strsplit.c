#include "libft.h"
#include <stdlib.h> 

int		num_block(char const *src, char c)
{
	int		i; 

	i = (*src != c) ? 1 : 0;
	while (*src)
	{
		if (*src == c && *(src + 1) != c)
			i++;
		src++;
	}
	return (i);
}

int		len_block(char const *src, char c)
{
	int 	i;

	i = 0;
	while (*src == c && *src)
		src++;
	while (*src != c && *src)
	{
		src++;
		i++;
	}
	return (i);
}

char *each_block(char const *src, char c, int *len)
{
	int		i;
	int		j;
	char	*ret;
	char	*orig;
	
	i = len_block(src, c);
	j = 0;
	ret = (char*)malloc(sizeof(char) * (i + 1));
	if (ret == NULL)
		return (0);
	orig = ret;
	while (*src == c && *src)
	{
		j++;
		src++;
	}
	while (*src != c && *src)
	{
		*ret = *src;
		j++;
		src++;
		ret++;
	}
	*len = j;
	*ret = '\0';
	return (orig);
}

char **ft_strsplit(char const *src, char c)
{
	int 	len1;
	int		len2;
	char	**ret;
	char	**orig;

	len1 = num_block(src, c);
	len2 = 0;
	ret = (char**)malloc(sizeof(char*) * (len1 + 2));
	if (ret == NULL)
		return (0);
	orig = ret;
	while (*src)
	{
		*ret = each_block(src, c, &len2);
		src = src + len2; 
		ret++;
	}
	return (orig);
}
