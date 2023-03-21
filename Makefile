NAME = push_swap.a

SOURCES = push_swap.c \
		sa_to_pb.c \
		ra_to_rrb.c \
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
		pack_sort.c \
		content.c \
		
		
OBJECTS = $(SOURCES:.c=.o)
BONUS = $(SRC_BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJECTS)
		$(AR) -r $@ $?

bonus: $(BONUS)
	$(AR) -r $(NAME) $?
	
clean:
		rm -f $(OBJECTS) $(BONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test