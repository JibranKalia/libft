#include "libft.h"
#include "stdio.h"

void	ft_bzero(void	*src, size_t n)
{
	unsigned char	*tmp_src;

	tmp_src = (unsigned char*)src;
	while (n-- > 0)
		*tmp_src++ = 0;
}
