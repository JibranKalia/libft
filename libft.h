#ifndef LIBFT_H
# define LIBFT_H

# include <string.h> 

void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_strcmp(const char *src1, const char *src2);
char	*ft_strcat(char *src1, const char *src2);
char	*ft_strncat(char *src1, const char *src2, size_t len);
size_t	ft_strlen(const char *src);

int		ft_isalnum(int c);
int		ft_isalpha(int	c);
int     ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *dst, const void *src, int src_c, size_t len);
void	*ft_memchr(const void *src, int src_c, size_t len);
int		ft_memcmp(const void *src1, const void *src2, size_t len);
void	ft_bzero(void *src, size_t len);
void	*ft_memset(void *src, int c, size_t len);

#endif
