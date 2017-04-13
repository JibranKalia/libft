NAME		:= libft.a
CFLAGS		+= -Wall -Wextra -Werror
CFLAGS		+= -I includes/

GNL			:= get_next_line
TBL			:= ft_tbldel
WCHAR		:= ft_wctomb
CHR 		:= ft_putchar ft_putchar_fd
LST			:= ft_lstadd ft_lstdel ft_lstdelone ft_lstiter ft_lstmap ft_lstnew
NBR			:= ft_atoi ft_itoa ft_itoa_base ft_nbrlen ft_nbrlen_base ft_putnbr ft_putnbr_fd
MEM			:= ft_bzero ft_memalloc ft_memccpy ft_memchr ft_memcmp \
					ft_memcpy ft_memdel ft_memmove ft_memset ft_realloc
CTYPE		:= ft_abs ft_isalnum ft_isalpha ft_isascii ft_isblank ft_iscntrl \
					ft_isdigit ft_isgraph ft_islower ft_isprint ft_ispunct  \
					ft_isspace ft_isupper ft_isxdigit ft_tolower ft_toupper
STR			:=  ft_putendl ft_putendl_fd ft_putstr ft_putstr_fd ft_strcat ft_strchr \
					ft_strclr ft_strcmp ft_strcpy ft_strdel ft_strdup ft_strequ \
					ft_striter ft_striteri ft_strjoin ft_strlcat ft_strlen ft_strmap \
					ft_strmapi ft_strncat ft_strncmp ft_strncpy ft_strndup ft_strnequ \
					ft_strnew ft_strnjoinf ft_strnlen ft_strnstr ft_strrchr ft_strsplit \
					ft_strstr ft_strsub ft_strtrim

FILES		:= $(addprefix chr/, $(CHR)) \
				$(addprefix ctype/, $(CTYPE)) \
				$(addprefix gnl/, $(GNL)) \
				$(addprefix lst/, $(LST)) \
				$(addprefix mem/, $(MEM)) \
				$(addprefix nbr/, $(NBR)) \
				$(addprefix str/, $(STR)) \
				$(addprefix wchar/, $(WCHAR)) \
				$(addprefix tbl/, $(TBL)) \

.PHONY = all clean fclean

SRC			:= $(addprefix src/, $(addsuffix .c, $(FILES)))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[32mLibft Created\033[0m"

clean:
	@rm -f $(OBJ)
	@echo "\033[32mLibft Object Files Removed\033[0m"

fclean: clean
	@rm -f $(NAME) 
	@echo "\033[32mLibft Removed\033[0m"
	
re: fclean all
