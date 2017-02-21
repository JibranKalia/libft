#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void			*tmp1;
	unsigned char	*tmp2;

	tmp1 = malloc(size);
	if (!tmp1)
		return (NULL);
	tmp2 = (unsigned char*)tmp1;
	while (size--)
		*tmp2++ = 0;
	return (tmp1);
}
