NAME = push_swap

SOURCES = push_swap.c \
		parser.c \
		inc_libft/ft_atoi.c \
		inc_libft/ft_lstadd_back.c \
		inc_libft/ft_lstnew.c \
		inc_libft/ft_split.c \
		inc_libft/ft_lstsize.c \
		inc_libft/ft_lstlast.c \
		inc_libft/ft_lstadd_front.c \
		inc_libft/ft_calloc.c \
		inc_libft/ft_strlen.c \
		inc_libft/ft_bzero.c \
		mirror_sort.c \
		mini_sort.c \
		content.c \
		push.c \
		reverse.c \
		rotate.c \
		swap.c \

OBJECTS = $(SOURCES:.c=.o)
BONUS = $(SRC_BONUS:.c=.o)

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror -g

all: libft $(NAME)

libft:
	$(MAKE) -C inc_libft

$(NAME): $(OBJECTS)
		$(CC) -L inc_libft -lft $(OBJECTS) -o $(NAME)

bonus: $(BONUS)
	$(AR) -r $(NAME) $?
	
clean:
		rm -f $(OBJECTS) $(BONUS)
		$(MAKE) -C inc_libft clean

fclean: clean
		rm -f $(NAME)
		$(MAKE) -C inc_libft fclean

re: fclean all

.PHONY: all clean fclean re test