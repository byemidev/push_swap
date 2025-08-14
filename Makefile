# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 13:29:06 by garevalo          #+#    #+#              #
#    Updated: 2025/08/14 07:38:47 by garevalo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRC_DIR		= src
SRCS		= $(SRC_DIR)/main.c \
		  $(SRC_DIR)/utils.c \
		  $(SRC_DIR)/rules.c \
		  $(SRC_DIR)/sort.c \
		  $(SRC_DIR)/chunk_sort.c \
		  $(SRC_DIR)/utils_main.c \
		  $(SRC_DIR)/utils_stacks.c

OBJS		= $(SRCS:.c=.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDE		= -I./includes -I./libft

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
