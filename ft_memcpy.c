#include "libft.h" 

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char	*csrc;
	char	*cdst;
	
	i = -1;
	csrc = (char*)src; 
	cdst = (char*)dst;

	while (++i < n)
		cdst[i] = csrc[i];
	return (cdst);
}
