#include <libft.h> 

int		ft_iscntrl(char c)
{
	return ((c <= 32 || c == 127) ? 1 : 0);
}
