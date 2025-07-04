NAME = push_swap.a
SRCS = push_swap.c src/*.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wextra -Werror -Wall

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -Ilibft

all: $(LIBFT) $(NAME)

AR = ar rcs
CP = cp

$(NAME): $(OBJS)
		$(CP) $(LIBFT) $(NAME)
		$(AR) $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re: fclean clean