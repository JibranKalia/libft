#include "libft.h" 

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	
	csrc = (char*)src; 
	cdst = (char*)dst;

	while (len-- > 0)
		*cdst++ = *csrc++;
	return (cdst);
}
