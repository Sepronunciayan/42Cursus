CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRC_DIR = srcs
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ = $(SRC:.c=.o)
OBJ_DIR = $(SRC_DIR)
OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))
LIB = libft.a

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re

