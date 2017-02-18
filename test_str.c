#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char 	src[20] = "!@#Ja09~";
	char 	srcA[20] = "";
	char 	src1[20] = "!@#Ja09~";
	char 	src2[20] = "!@#Ja09~";
	char 	src3[20] = "!@#Ja09~";
	char 	src4[20] = "!@#Ja09~";
	char	src5[20];
	char	src6[20];
	char	src7[20] = "AAAAAAAAAAAAAA";
	char	src8[20] = "AAAAAAAAAAAAAA";

	int		err_flag = 0;

	//STRCAT TEST
	strcat(src1, src);
	ft_strcat(src2, src);
	if (strcmp(src1, src2) != 0)
	{
		printf("\033[0;31mSTRCAT FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRDUP TEST
	char	*output1 = strdup(src);
	char	*output2 = ft_strdup(src);
	if (strcmp(output1, output2) != 0 || strcmp(strdup(srcA), ft_strdup(srcA)) != 0)
	{
		printf("%s\n", output1);
		printf("%s\n", output2);
		printf("\033[0;31mSTRCDUP FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRCPY TEST
	strcpy(src5, src);
	ft_strcpy(src6, src);
	strcpy(src7, src);
	ft_strcpy(src8, src);
	if (strcmp(src5, src6) != 0 || strcmp(src7, src8))
	{
		printf("\033[0;31mSTRCPY FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRCHR TEST
	char *dest1 = strchr(src, 'a');
	char *dest2 = ft_strchr(src, 'a');
	char *dest3 = strchr(src, '\0');
	char *dest4 = ft_strchr(src, '\0');
	if (strcmp(dest1, dest2) != 0 || strcmp(dest3, dest4))
	{
		printf("\033[0;31mSTRCHR FAILED\033[0m\n");
		err_flag = 1;
	}
	
	//STRNCAT TEST
	strncat(src3, src, 4);
	ft_strncat(src4, src, 4);
	if (strcmp(src3, src4) != 0)
	{
		printf("\033[0;31mSTRCAT FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRLEN TEST
	if (strlen(src) != ft_strlen(src))
	{
		printf("\033[0;31mSTRLEN FAILED\033[0m\n");
		err_flag = 1;
	}

	if (err_flag != 1)
		printf("\033[0;32mSTR Tests Passed\033[0m\n");
}
