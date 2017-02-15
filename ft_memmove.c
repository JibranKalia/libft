#include "libft.h" 
#include <stdlib.h> 

void	*ft_memmove(void *dst, const void* src, size_t len)
{
	void	*tmp;
	tmp = malloc(sizeof(src));

	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);

	return (dst);
}
