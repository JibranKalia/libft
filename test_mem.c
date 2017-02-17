#include "libft.h"
#include <stdlib.h>
#include <stdio.h> 

int		main(void)
{
	int		mem_flag;
	char 	csrc[20] = "Geeksfor";
	char 	csrc1[20] = "Geeksfor";
	char 	csrc2[20] = "Geeksfor";

	char 	csrcA[20] = "Geeksfor";
	char 	csrcB[20] = "Geeksfor";
	char 	csrcC[20] = "Gesfor";
	char 	csrcD[20] = "Geeksfr";

	char 	dst1[20];
	char 	dst2[20];
	char	dst3[20];
	char	dst4[20];

	// MEMCPY TESTS
	memcpy(dst1, csrc, 10);
	ft_memcpy(dst2, csrc, 10);

	if (ft_strcmp(dst1, dst2) == 0)
		mem_flag = 1;
	else
	{
		mem_flag = 0;
		printf("Memcpy FAILED\n");
	}
	
	// MEMCMP TESTS
	int cmp_flag = 0;
	if (memcmp(dst1, csrc, 10) != ft_memcmp(dst2, csrc, 10))
		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 1);
	if (memcmp(csrcA, csrcB, 10) != ft_memcmp(csrcA, csrcB, 10))
		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 2);
	if (memcmp(csrcA, csrcC, 10) != ft_memcmp(csrcA, csrcC, 10))
	{
		printf("LIB:	%d\n", memcmp(csrcA, csrcC, 10));
		printf("FT:		%d\n", ft_memcmp(csrcA, csrcC, 10));

		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 3);
	}
	if (memcmp(csrcA, csrcD, 10) != ft_memcmp(csrcA, csrcD, 10))
		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 4);
	if (memcmp(csrcA, csrcD, 0) != ft_memcmp(csrcA, csrcD, 0))
		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 5);

	if (cmp_flag > 0)
		mem_flag = 0;

	// MEMCCPY TESTS
	memccpy(dst3, csrc, 'f', 10);
	ft_memccpy(dst4, csrc, 'f', 10);

	if (ft_strcmp(dst3, dst4) == 0 && mem_flag == 1)
		mem_flag = 1;
	else if (ft_strcmp(dst3, dst4) != 0)
	{
		mem_flag = 0;
		printf("\e[0;31mMemccpy FAILED\e[0m\n");
		printf("Expected Output: 	%s\n", dst3);
		printf("Function Output:	%s\n", dst4);
	}

	// MEMCCHR TESTS
	const char *output1 = (char*)memchr(csrc, 'f', 10);
	const char *output2 = (char*)ft_memchr(csrc, 'f', 10);
	const char *output3 = (char*) memchr(csrc, 'k', 2);
	const char *output4 = (char*) ft_memchr(csrc, 'k', 2);
	
	int res1 = ft_strcmp(output1, output2);
	int res2; //Can't use strcmp to compare NULL strings. 
	if (output3 == NULL && output4 == NULL)
		res2 = 1;
	if (res1 == 0 && res2 == 1 && mem_flag == 1) 
		mem_flag = 1;
	else if (ft_strcmp(output1, output2) != 0)
	{
		mem_flag = 0;
		printf("Expected Output:	%s\n", output1);
		printf("Function Output:	%s\n", output2);
		printf("\e[0;31mMemcchr FAILED\e[0m\n");
	}

	// MEMMOVE TESTS
	memmove(csrc1 + 5, csrc1, 10);
	ft_memmove(csrc2 + 5, csrc2, 10);

	if (ft_strcmp(csrc1, csrc2) == 0 && mem_flag == 1)
		mem_flag = 1;
	else if (ft_strcmp(csrc1, csrc2) != 0)
	{
		mem_flag = 0;
		printf("\e[0;31mMemmove FAILED\e[0m\n");
	}

	if (mem_flag == 1)
		printf("All Mem Test Passed\n");
	else 
		printf("Failed Mem Test\n");

	return (0);
}
