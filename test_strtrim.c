#include "libft.h"


int 	ft_strtrim1(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		return (1);
	return (0);
}
int 	main(void)
{
	CHK1((ft_strtrim1()) == 0, ft_putstr("Error"), 0);

}