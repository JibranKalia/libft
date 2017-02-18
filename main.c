#include <stdio.h> 
#include "libft.h"

int		main(void)
{
	char    src[20] = "!@#Ja09~";   //8
	char	src15[20] = "a";	
	char	src16[20] = "a";
	char	src17[20] = "a";	
	char	src18[20] = "a";

	int		ans1 = strlcat(src15, src, 5);
	int		ans2 = ft_strlcat(src16, src, 5);
	int		ans3 = strlcat(src17, src, 20);
	int		ans4 = ft_strlcat(src18, src, 20);


	if ((ans1 != ans2) || (ans3 != ans4))
	{
		printf("Expected:	%lu\n", strlcat(src15, src, 5));
		printf("Expected: 	%s\n", src15);
		printf("LIBFT:		%lu\n", ft_strlcat(src16, src, 5));
		printf("LIBFT: 	%s\n", src16);
	
	
		printf("\033[0;31mSTRLCAT FAILED\033[0m\n");
	}
	if ((strcmp(src15, src16) != 0) || (strcmp(src17, src18) != 0))
	{
		printf("\033[0;31mSTRLCAT FAILED\033[0m\n");
	}
}
