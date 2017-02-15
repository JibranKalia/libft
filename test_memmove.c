#include "libft.h"
#include <stdlib.h>
#include <stdio.h> 

int		main(void)
{
	printf("Scenario 1: \n");
	char csrc[20] = "Geeksfor";
	char csrc1[20] = "Geeksfor";
	char csrc2[20] = "Geeksfor";
	ft_memcpy(csrc + 5, csrc, 10);
	printf("Memcpy Output:  %s\n", csrc);
	memmove(csrc1 + 5, csrc1, 10);
	printf("Expected Output: %s\n", csrc1);
	ft_memmove(csrc2 + 5, csrc2, 10);
	printf("My Output:       %s\n", csrc2);
}
