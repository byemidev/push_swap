NAME = push_swap.a

SRCS = src/main.c src/rules.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wextra -Werror -Wall

PRINTF_DIR = includes/printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

INCLUDES = -Ilibftprintf

AR = ar rcs
CP = cp

.PHONY: all clean fclean re printf_clean printf_fclean

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(CP) $(PRINTF) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

re: fclean all

printf_clean:
	$(MAKE) -C $(PRINTF_DIR) clean

printf_fclean:
	$(MAKE) -C $(PRINTF_DIR) fclean

all: $(LIBFT) $(PRINTF) $(NAME)

# esta funcionando mal, necesitaria poder solo
# usar printf ya que contiene la libreria de libft,
# pero no la detecta cuando intento