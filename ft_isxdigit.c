#include "libft.h" 

int		ft_isxdigit(char c)
{
	return (ft_isdigit(c) || (c >= 'a' && c <= 'f') 
			|| (c >= 'A' && c <= 'F') ? 1 : 0);
}
