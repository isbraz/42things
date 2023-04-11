# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 18:46:38 by isbraz-d          #+#    #+#              #
#    Updated: 2023/04/11 20:16:32 by isbraz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_*.c

OBJS	=	(SRCS:.c=.o)

all:	$(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
re:	fclean $(NAME)
