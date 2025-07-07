NAME = push_swap.a
SRCS = src/*.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wextra -Werror -Wall

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -Ilibft

.PHONY: all clean fclean re libft_clean libft_fclean

all: $(LIBFT) $(NAME)

AR = ar rcs
CP = cp

$(NAME): $(OBJS)
	$(CP) $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean: libft_clean
	rm -f $(OBJS)

fclean: clean libft_fclean
	rm -f $(NAME)

re: fclean all

libft_clean:
	$(MAKE) -C $(LIBFT_DIR) clean

libft_fclean:
	$(MAKE) -C $(LIBFT_DIR) fclean

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@