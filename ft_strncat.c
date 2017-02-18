#include "libft.h"

char	*ft_strncat(char *src1, const char *src2, size_t len)
{
	while (*src1)
		src1++;

	while (*src2 && len-- > 0)
		*src1++ = *src2++;
	*src1 = '\0';

	return (src1);
}
