#include <ctype.h> 
#include <stdio.h> 

int		ft_isdigit(char c);

int	main (void)
{
	int		bench_output;
	int		test_output;

	int		i;
	char	testarray[35] = {"!@#$%^&*()_+|}{:?<>ABCXYZabcxyz  "};

	i = -1;
	while (testarray[++i])
	{
		bench_output = isdigit(testarray[i]);
		test_output = ft_isdigit(testarray[i]);
		if (bench_output != test_output)
		{
			printf("Test %d = Error\n", i);
			break ;
		}
	}
	printf("is_aplha: SUCCESS\n");
	return (0);
}
