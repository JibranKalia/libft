#include "libft.h"

int		ft_strnequ(char const *src1, char const *src2, size_t len)
{
	while ((*src1 || *src2) && len > 0)
	{
		if (*src1 != *src2)
			return (0);
		src1++;
		src2++;
		len--;
	}
	return (1);
}