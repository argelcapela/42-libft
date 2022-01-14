# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acapela- < acapela-@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 15:09:39 by acapela-          #+#    #+#              #
#    Updated: 2021/09/20 15:09:39 by acapela-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a

SRCS=	ft_isalnum.c \
	ft_atoi.c \
	ft_isascii.c \
	ft_putstr_fd.c \
	ft_isdigit.c \
	ft_isalpha.c \
	ft_bzero.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c\
	ft_calloc.c\

B_SRCS=	ft_lstadd_front.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstiter.c\
	ft_lstmap.c\
	ft_lstnew.c\

OBJS= $(SRCS:.c=.o)

B_OBJS= $(B_SRCS:.c=.o)

CC= clang

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)
	echo "Success!"

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean: clean
	rm -f $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(B_OBJS)
	ar rc $(NAME) $(B_OBJS)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean  re bonus rebonus
