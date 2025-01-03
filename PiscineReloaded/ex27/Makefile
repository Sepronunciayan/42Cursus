NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
OBJS = *.c
all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
