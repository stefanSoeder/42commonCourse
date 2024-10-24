
# Compiling flags
FLAG = -Wall -Wextra -Werror 

# Built program name
NAME = libftrintf.a

# Source files (.c)
SRC = ft_putchar.c ft_puts.c ft_putptr.c ft_printf.c ft_putnbrprint.c ft_putunsignnbr.c ft_puthex.c \
		

# Object files (.o)
OBJ = $(SRC:.c=.o)

# To be executed:
all: ${NAME}

# Build program from .o files
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) created and idexed"

# Creation of .o files
%.o: %.c
	@gcc $(FLAG) -c $< -o $@

# Deletes .o files
clean:
	@rm -f $(OBJ)
	@echo "OBJ cleaned"

# Deletes .o files and built program.
fclean: clean
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@echo "All objects and executable have been removed"

#Deletes built program and builds it again:
re: fclean all

# Set key words as commands, not files, to avoid conflicts if existing files use that word as their name:
.PHONY: all clean fclean re bonus
