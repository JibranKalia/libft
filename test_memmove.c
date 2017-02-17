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
	printf("Memcpy Lib Output:		%s\n", dest1);
	ft_memcpy(dest2, csrc, 10);
	printf("Memcpy FT Output:  		%s\n", dest2);
	memmove(csrc1 + 5, csrc1, 10);
	printf("Memmove Lib Output:		%s\n", csrc1);
	ft_memmove(csrc2 + 5, csrc2, 10);
	printf("Memmove My Output:		%s\n", csrc2);

	printf("If outputs match. Memove and Memcpy pass.\n");
}
