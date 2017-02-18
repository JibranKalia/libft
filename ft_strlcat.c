#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *src, size_t len)
{
	while (*src1)
		src1++;

	while (*src2)
		*src1++ = *src2++;

	return (src1);
}
