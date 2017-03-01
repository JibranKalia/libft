#include "libft.h"
#include <stdio.h> 

int 	main(void)
{
	char	*ret1;
	//int 	n = 2147483647;
	int 	n = -364;
	ret1 =	ft_itoa(n);

	//printf("%d\n", n);
	printf("%s\n", ret1);
	return (0);
}
