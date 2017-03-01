#include "libft.h"
#include <stdlib.h> 

char	*ft_strdup(const char *src)
{
	int			len;
	char		*dst;

	len = 0;
	while (*src++)
		len++;
	CHK((dst = (char*)malloc(sizeof(char) * (len + 1))) == NULL, NULL);
	src = src - len - 1;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst - len);
}



