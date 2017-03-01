#include "libft.h"
#include "stdio.h"

int 	test_strtrim1(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		return (1);
	return (0);
}

int 	test_strtrim2(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		return (1);
	return (0);
}
int 	test_strtrim3(void)
{
	char *s1 = "";
	char *s2 = "";
	char *ret = ft_strtrim(s1);

	if (!strcmp(ret, s2))
		return (1);
	return (0);
}
int 	main(void)
{
	if (test_strtrim1() == 0)
		printf("Test1: Error\n");
	else
		printf("Test1 PASS\n");
	if (test_strtrim2() == 0)
		ft_putstr("Test2: Error\n");
	else
		printf("Test2 PASS\n");
	if((test_strtrim3() == 0))
		printf("Test3: Error\n");
	else
		printf("Test3 PASS\n");
	return (0);
}
