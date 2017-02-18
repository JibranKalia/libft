#include <stdlib.h>
#include <stdio.h> 
#include "libft.h"

int		main (void)
{
	//ATOI TEST
	char src[20][20] = {"1234", "  22", "    1234", " a   1234", "   12a  34", 
		"   12  34", "   \n12  34", "   \n12  34", "   \n-12  34", "   \n-12-  34", 
		"  --12-  34", "2147483647", "-2147483648"};
	int		nbr_flag = 0;
	int		atoi_flag = 0;
	int		i = 0;

	while (++i < 20)
	{	
		if (atoi(src[i]) != ft_atoi(src[i]))
		{
			printf("\033[0;31mTest%d: Atoi Failed\n\033[0m", i);
			atoi_flag = 1;
			nbr_flag = 1;
		}
	}

	//ABS TEST
	int		abs_flag = 0;	
	if(abs(2147483647) != ft_abs(2147483647))
		abs_flag = 1;
	if(abs(-2147483647) != ft_abs(-2147483647))
		abs_flag = 1;
	if(abs(0) != ft_abs(0))
		abs_flag = 1;
	
	if (abs_flag == 1)
	{
		printf("\033[0;31mTest%d: Atoi Failed\n\033[0m", i);
		nbr_flag = 1;
	}
		

	if (nbr_flag == 0)
		printf("\033[0;32mAll Nbr Functions PASS\033[0m\n");
	return (0);
}
