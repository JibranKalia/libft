#include "libft.h"
#include <stdlib.h> 

char	*ft_strdup(const char *src)
{
	int			len;
	char		*dst;

	len = ft_strlen(src);
	CHK((dst = (char*)malloc(sizeof(char) * (len + 1))) == 0, 0);
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst - len);
}



