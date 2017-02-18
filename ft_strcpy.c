char	*ft_strcpy(char* dst, const char* src)
{
	char	*cdst;
	cdst = dst;
	while (*src)
	{
		*cdst++ = *src++;
	}
	*cdst = '\0';
	return (dst);
}
