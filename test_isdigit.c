#include <ctype.h> 
#include <stdio.h> 
#include "libft.h"

int	main (void)
{
	int		bench_output;
	int		test_output;

	int		i;

	i = -1;
	while (++i < 127)
	{
		bench_output = iscntrl(i);
		test_output = ft_iscntrl(i);
		if (bench_output != test_output)
		{
			printf("Expected %d. Output %d\n", bench_output, test_output);
			printf("Test %d = Error\n", i);
			break ;
		}
	}
	printf("is_cntrl: SUCCESS\n");
	return (0);
}
