NAME = push_swap
SRCS = src/*.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wextra -Werror -Wall

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

INCLUDES = -I$(LIBFT_DIR)

AR = ar rcs
CP = cp

.PHONY: all clean fclean re libft_clean libft_fclean

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(CP) $(LIBFT) .
	$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

libft_clean:
	$(MAKE) -C $(LIBFT_DIR) clean

libft_fclean:
	$(MAKE) -C $(LIBFT_DIR) fclean

all: $(LIBFT) $(NAME)
