NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalnum.c \
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
	
TEST = test_ctype.c

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
	@echo "Removed Object Files"

fclean: clean
	@rm -f $(NAME) test a.out
	@echo "Removed Compiled Files" 

re: fclean all

test: all 
	@rm -f test
	@gcc -Wall -Wextra -Werror $(TEST) -L. -lft -o test
	./test

