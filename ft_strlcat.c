#include "libft.h"
#include <stdio.h> 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		final;
	int		len_dst;
	int		len_final;
	
	final = 0;
	len_dst = 0;
	len_final = 0;
	while(*dst && size-- > 0)
	{
		final++;
		dst++;
	}
	if (size == 0)
		return (final);
	size--;
	while (*src && size-- > 0)
	{
		*dst++ = *src++;
		final++;
	}
	*dst = '\0';
	return (final);
}
