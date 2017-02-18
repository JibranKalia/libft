int		ft_atoi(const char *str)
{
	int		neg_flag;
	int		res;

	while (*str == '\n' || *str == '\t' || *str == ' ')
		str++;
	neg_flag= (*str == '-') ? 1 : 0;
	if (*str == '+' || *str == '-')
		str++;

	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((neg_flag == 0) ? res : -res);
}
