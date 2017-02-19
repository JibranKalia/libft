#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	unsigned char	to_find;
	char			*csrc;

	csrc = 	(char*)src;
	to_find = (unsigned char)c;
	while (csrc)
	{
		if (*csrc == to_find)
			return (csrc);
		csrc++;
	}
	return (NULL);
}
