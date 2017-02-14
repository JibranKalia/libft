#include <libft.h> 

int		ft_ispunct(char c)
{
	return ((c >= '!' && c <= ''') || (c >= '(' && c <= '/') 
			|| (c >= ':' && c <= '?') || c == '@' || (c >= '[' && c <= '_') 
			|| c == '`' || (c >= '{' && c <= '~') 1 : 0);
}
