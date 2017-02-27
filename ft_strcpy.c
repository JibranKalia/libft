#include "libft.h"

char	*ft_strcpy(char* dst, const char* src)
{
	size_t	i;

	while (src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (dst);
}