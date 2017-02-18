char	*ft_strcat(char *src1, const char *src2)
{
	while (*src1)
		src1++;

	while (*src2)
		*src1++ = *src2++;

	return (src1);
}
