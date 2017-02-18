#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	unsigned char	to_find;
	to_find = (unsigned char)c;

	while (*src++)
	{
		if (*src == to_find)
			return ((char*)src);
	}
	return (NULL);
}
