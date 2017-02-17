#include "libft.h" 
#include <stdlib.h> 

void	*ft_memmove(void *dst, const void* src, size_t len)
{
    unsigned char *csrc;
    unsigned char *cdst;
    
    csrc = (unsigned char*)src;
    cdst = (unsigned char*)dst;
	if (cdst > csrc)
	{
		csrc = csrc + len - 1;
		cdst = cdst + len - 1;
	    while (len-- > 0)
	        *cdst-- = *csrc--;
	}
	else
	{
		while (len-- > 0)
			*cdst++ = *csrc++;
	}
	return (cdst);
}
