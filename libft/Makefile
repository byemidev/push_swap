# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garevalo <garevalo@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 18:36:39 by garevalo          #+#    #+#              #
#    Updated: 2025/04/17 17:31:52 by garevalo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
	   	ft_isalnum.c \
	   	ft_isascii.c \
	   	ft_isprint.c \
	   	ft_strlen.c  \
	   	ft_memset.c  \
	   	ft_bzero.c   \
	   	ft_memcpy.c  \
	   	ft_memmove.c \
	   	ft_strlcpy.c \
	  	ft_strlcat.c \
	   	ft_toupper.c \
	   	ft_tolower.c \
	   	ft_strchr.c  \
	   	ft_strrchr.c \
	  	ft_strncmp.c \
	   	ft_memchr.c  \
	   	ft_memcmp.c  \
	   	ft_strnstr.c \
	   	ft_atoi.c \
	   	ft_calloc.c  \
	   	ft_strdup.c  \
	   	ft_substr.c  \
	   	ft_strjoin.c \
	   	ft_strtrim.c \
	   	ft_split.c   \
	   	ft_itoa.c    \
	   	ft_strmapi.c \
	   	ft_striteri.c\
	   	ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c

SRCS_BONUS =	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

re: fclean all
