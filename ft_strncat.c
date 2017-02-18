#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t len)
{
	while (*dst)
		dst++;

	while (*src && len-- > 0)
		*dst++ = *src++;
	*dst = '\0';

	return (dst);
}
