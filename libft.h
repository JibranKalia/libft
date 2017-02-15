#ifndef LIBFT_H
# define LIBFT_H

# include <string.h> 

void	ft_putchar(char c);
void	ft_putnbr(int n);

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

#endif
