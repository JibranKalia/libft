#include "libft.h"
#include <stdlib.h>
#include <stdio.h> 

int		main(void)
{
	char csrc[20] = "Geeksfor";
	char csrc1[20] = "Geeksfor";
	char csrc2[20] = "Geeksfor";
	char dest1[20];
	char dest2[20];

	ft_memcpy(dest1, csrc, 10);
	ft_memcpy(dest2, csrc, 10);

	if (ft_strcmp(dest1, dest2) == 0)
		printf("Memcpy PASSED\n");
	else
		printf("Memcpy FAILED\n");

	memmove(csrc1 + 5, csrc1, 10);
	ft_memmove(csrc2 + 5, csrc2, 10);

	if (ft_strcmp(csrc1, csrc2) == 0)
		printf("Memmove PASSED\n");
	else
		printf("Memmove FAILED\n");

	return (0);
}
