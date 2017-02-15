#include "libft.h"
#include <stdlib.h>
#include <stdio.h> 

int		main(void)
{
	int		*src;
	int		*dest = NULL;
	//char	*charsrc;
	char	*chardst;

	src = (int*)malloc(sizeof(int) * 10);
	dest = (int*)malloc(sizeof(int) * 5);

	//charsrc = (char*)malloc(sizeof(char) * 10);
	chardst = (char*)malloc(sizeof(char) * 10);
	
	char charsrc[] = "abcdedfg";

	//memcpy(dest, ((int []){123, 222, 33332}), 12);
	ft_memcpy(dest, ((int []){12233223, 222, 33332}), 12);

	memmove(charsrc, charsrc, 20);
	printf("%s\n", charsrc);

	int	i = -1;
	while (++i < 3)
		printf("%d, ", dest[i]);
}
