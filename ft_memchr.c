#include "libft.h" 

void	*ft_memchr(const void *src, int src_c, size_t len)
{
	const char		*csrc;
	csrc = (const char*)src;

	while(len-- > 0)
	{
		if (*csrc++ == (unsigned char)src_c)
			return ((void*)csrc - 1);
	}
	return (NULL);
}
