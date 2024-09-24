
# Compiling flags
FLAG = -Wall -Wextra -Werror

# Built program name
NAME = libft.a

# Source files (.c)
SRC = ft_isalpha.c \
      		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \

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
