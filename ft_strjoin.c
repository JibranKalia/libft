#include "libft.h"

char	*ft_strjoin(char const *src1, char const *src2)
{
	size_t	len;
	char 	*dst;
	char 	*orig;
	len = ft_strlen(src1);
	len += ft_strlen(src2);

	CHK((dst = ft_strnew(len + 1)) == NULL, NULL);
	orig = dst;
	while (*src1)
		*dst++ = *src1++;
	while (*src2)
		*dst++ = *src2++;
	*dst = '\0';
	return (orig);
}