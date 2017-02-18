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
	char	src9[20];
	char	src10[20];
	char	src11[20] = "AAAAAAAAAAAAAA";
	char	src12[20] = "AAAAAAAAAAAAAA";
	char	src13[20];
	char	src14[20];
	char	src15[20] = "a";
	char	src16[20] = "a";
	char	src17[20] = "aAA";
	char	src18[20] = "aAA";

	int		err_flag = 0;
	
	//STRCMP TEST
	
	int		ret1 = strcmp(src8, src18);
	int		ret2 = ft_strcmp(src8, src18);
	int		ret3 = strcmp(src2, src3);
	int		ret4 = ft_strcmp(src2, src3);

	if ((ret1 != ret2) || (ret3 != ret4))
	{
		printf("\033[0;31mSTRCMP FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRNCMP TEST
	int		ret5;
	int		ret6;
	int 	ret7;
	int		ret8;
	int		i_strncmp = -1;

	while (++i_strncmp < 20)
	{
		ret5 = strncmp(src8, src18, i_strncmp);
		ret6 = ft_strncmp(src8, src18, i_strncmp);
		ret7 = strncmp(src2, src3, i_strncmp);
		ret8  = ft_strncmp(src2, src3, i_strncmp);
		
		if ((ret1 != ret2) || (ret3 != ret4))
		{
			printf("\033[0;31mSTRnCMP FAILED\033[0m\n");
			err_flag = 1;
			break ;
		}
	}

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

	//STRNCPY TEST
	strncpy(src9, src, 7);
	ft_strncpy(src10, src, 7);
	strncpy(src11, src, 0);
	ft_strncpy(src12, src, 0);
	strncpy(src13, src, 15);
	ft_strncpy(src14, src, 15);
	if (strcmp(src9, src10) != 0 || strcmp(src11, src12) != 0
			|| strcmp(src13, src14) != 0)
	{
		printf("\033[0;31mSTRNCPY FAILED\033[0m\n");
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

	//STRLCAT TEST
	int		ans1 = strlcat(src15, src, 5);
	int		ans2 = ft_strlcat(src16, src, 5);
	int		ans3 = strlcat(src17, src, 20);
	int		ans4 = ft_strlcat(src18, src, 20);


	if ((ans1 != ans2) || (ans3 != ans4))
	{
		printf("\033[0;31mTest1: STRLCAT FAILED\033[0m\n");
		err_flag = 1;
	}
	if ((strcmp(src15, src16) != 0) || (strcmp(src17, src18) != 0))
	{
		printf("\033[0;31mTest2: STRLCAT FAILED\033[0m\n");
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
