#include "libft.h"
#include <stdlib.h>
#include <stdio.h> 

int		main(void)
{
	int		flag;
	char 	csrc[20] = "Geeksfor";
	char 	csrc1[20] = "Geeksfor";
	char 	csrc2[20] = "Geeksfor";
	char 	dst1[20];
	char 	dst2[20];
	char	dst3[20];
	char	dst4[20];

	// MEMCPY TESTS
	memcpy(dst1, csrc, 10);
	ft_memcpy(dst2, csrc, 10);

	if (ft_strcmp(dst1, dst2) == 0)
		flag = 1;
	else
	{
		flag = 0;
		printf("Memcpy FAILED\n");
	}

	// MEMCCPY TESTS
	memccpy(dst3, csrc, 'f', 10);
	ft_memccpy(dst4, csrc, 'f', 10);

	if (ft_strcmp(dst3, dst4) == 0 && flag == 1)
		flag = 1;
	else if (ft_strcmp(dst3, dst4) != 0)
	{
		flag = 0;
		printf("\e[0;31mMemccpy FAILED\e[0m\n");
		printf("Expected Output: 	%s\n", dst3);
		printf("Function Output:	%s\n", dst4);
	}

	// MEMMOVE TESTS
	memmove(csrc1 + 5, csrc1, 10);
	ft_memmove(csrc2 + 5, csrc2, 10);

	if (ft_strcmp(csrc1, csrc2) == 0 && flag == 1)
		flag = 1;
	else if (ft_strcmp(csrc1, csrc2) != 0)
	{
		flag = 0;
		printf("\e[0;31mMemmove FAILED\e[0m\n");
	}

	if (flag == 1)
		printf("All Mem Test Passed\n");
	else 
		printf("Failed Mem Test\n");

	return (0);
}
