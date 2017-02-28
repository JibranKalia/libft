#include <stdio.h>
#include <stdlib.h> 
#include <wchar.h>
#include "libft.h"


int		strequ1()
{
	char	src1[20] = "AAAAAAAAAAAAAA";
	char	src2[20] = "aAA";
	char	src3[20] = "AAAAAAAAAAAAAA";

	printf("%d\n", ft_strequ(src1, src2));
	printf("%d\n", ft_strequ(src1, src3));
}

int		main(void)
{
	strequ1();

	return (0);
}

