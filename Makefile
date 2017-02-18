NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c \
	  ft_strcmp.c \
	  ft_putnbr.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isblank.c \
	  ft_iscntrl.c \
	  ft_isdigit.c \
	  ft_isgraph.c \
	  ft_islower.c \
	  ft_isprint.c \
	  ft_ispunct.c \
	  ft_isspace.c \
	  ft_isupper.c \
	  ft_isxdigit.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memmove.c \
	  ft_bzero.c \
	  ft_memset.c \
	  ft_memcmp.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlen.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strlcpy.c \
	  ft_strdup.c \
	  ft_strchr.c \

RED 	= \033[0;31m
YELLOW 	= \033[0;33m
NC		= \033[0m
		
.PHONY = all clean

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc -c $(CFLAGS) $< -o $@
	@echo "Compiling Object Files"

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ) 
	@echo "Library Created" 

clean: 
	@rm -f $(OBJ)
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	@rm -f $(NAME) a.out
	@echo "\033[32mRemoved Compiled Files.\033[0m" 

re: fclean all 

test: all 
	@rm -f test
	@echo "${YELLOW}Test1: Ctype Functions${NC}"
	@gcc -Wall -Wextra -Werror test_ctype.c -L. -lft -o test1
	@./test1
	@echo "${YELLOW}Test2: Memset, Memchr, Memcpy, Memcmp, Memccpy, Memmove${NC}"
	@gcc -Wall -Wextra -Werror test_mem.c -L. -lft -o test2
	@./test2
	@echo "${YELLOW}Test3: Bzero${NC}"
	@gcc -Wall -Wextra -Werror test_bzero.c -L. -lft -o test3
	@./test3
	@echo "${YELLOW}Test4: Strcat${NC}"
	@gcc -Wall -Wextra -Werror test_str.c -L. -lft -o test4
	@./test4
	@rm -f test1 test2 test3 test4
