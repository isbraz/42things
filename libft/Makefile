# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 18:46:38 by isbraz-d          #+#    #+#              #
#    Updated: 2023/04/16 13:38:42 by isbraz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_substr.c ft_isalpha.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c \
	ft_atoi.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_strlen.c ft_isalpha.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c 

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
	ar -crs $@ $^

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all
