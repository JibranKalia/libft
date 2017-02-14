#include <libft.h> 

int		ft_isprint(char c)
{
	return ((c >= 32 && c <= 127) ? 1 : 0);
}
