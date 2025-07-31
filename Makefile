# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garevalo <garevalo@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 13:29:06 by garevalo          #+#    #+#              #
#    Updated: 2025/07/31 14:09:00 by garevalo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -------------------------------------------
# Push-Swap Makefile (macOS-ready)
# -------------------------------------------

NAME		= push_swap

SRC_DIR		= src
SRCS		= $(SRC_DIR)/main.c        \
		  $(SRC_DIR)/utils.c       \
		  $(SRC_DIR)/rules.c       \
		  $(SRC_DIR)/sort.c        \
		  $(SRC_DIR)/utils_stacks.c

OBJS		= $(SRCS:.c=.o)

# Compiler / flags
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDE		= -I./includes -I./libft

# Libft
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

# Default rule
all: $(NAME)

# Build the final executable
$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Build libft if missing
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Cleanup
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
