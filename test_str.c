#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char 	src[20] = "!@#Ja09~";
	char 	src1[20] = "!@#Ja09~";
	char 	src2[20] = "!@#Ja09~";
	char 	src3[20] = "!@#Ja09~";
	char 	src4[20] = "!@#Ja09~";


	int		err_flag = 0;

	//STRCAT TEST
	strcat(src1, src);
	ft_strcat(src2, src);
	if (strcmp(src1, src2) != 0)
	{
		printf("STRCAT FAILED\n");
		err_flag = 1;
	}

	//STRCHR TEST
	char *dest1 = strchr(src, 'a');
	char *dest2 = ft_strchr(src, 'a');
	char *dest3 = strchr(src, '\0');
	char *dest4 = ft_strchr(src, '\0');
	if (strcmp(dest1, dest2) != 0 || strcmp(dest3, dest4))
	{
		printf("STRCAT FAILED\n");
		err_flag = 1;
	}
	
	//STRNCAT TEST
	strncat(src3, src, 4);
	ft_strncat(src4, src, 4);
	if (strcmp(src3, src4) != 0)
	{
		printf("STRCAT FAILED\n");
		err_flag = 1;
	}

	//STRLEN TEST
	if (strlen(src) != ft_strlen(src))
	{
		printf("STRLEN FAILED\n");
		err_flag = 1;
	}



	if (err_flag != 1)
		printf("Passed all STR Tests\n");
}
