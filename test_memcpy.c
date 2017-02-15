#include "libft.h"
#include <stdlib.h>
#include <stdio.h> 
// Without Malloc strange things start happeing. 
int		main(void)
{
	int		*src;
	int		*dest = NULL;

	src = (int*)malloc(sizeof(int) * 10);
	dest = (int*)malloc(sizeof(int) * 5);

	//memcpy(dest, ((int []){123, 222, 33332}), 12);
	ft_memcpy(dest, ((int []){123, 222, 33332}), 12);
	//ft_memcpy(dest, src, 5);

	int	i = -1;
	while (++i < 3)
		printf("%d, ", dest[i]);
}
