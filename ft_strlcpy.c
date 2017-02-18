#include "libft.h"
#include "stdio.h"

size_t *ft_strlcpy(char* dst, const char* src, size_t len)
{
	char	*cdst;
	cdst = dst;
	while (*src && len > 0)
	{
		*cdst++ = *src++;
		len--;
	}
	while (len-- > 0)
		*cdst++ = '\0';
	return (dst);
}
