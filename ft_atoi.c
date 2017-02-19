int		ft_atoi(const char *str)
{
	int		neg_flag;
	int		res;
	int		limit;

	limit = 0;
	while (*str == '\n' || *str == '\v' || *str == '\f' || 
			*str == '\r' || *str == '\t' || *str == ' ')
		str++;
	neg_flag= (*str == '-') ? 1 : 0;
	if (*str == '+' || *str == '-')
		str++;

	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
		limit++;
	}
	if (limit > 12)
		return ((neg_flag == 0) ? -1 : 0);
	return ((neg_flag == 0) ? res : -res);
}
