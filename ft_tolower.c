int		ft_tolower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c + 32);
	else
		return (c);
}
