CC = cc
CFLAGS = -Wall -Wextra -Werror

PATH_SRC = ./srcs
PATH_INCLUDE = ./includes

NAME = libft.a

SRCS = $(PATH_SRC)/ft_putchar.c \
       $(PATH_SRC)/ft_putstr.c \
       $(PATH_SRC)/ft_strcmp.c \
       $(PATH_SRC)/ft_strlen.c \
       $(PATH_SRC)/ft_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(PATH_INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re