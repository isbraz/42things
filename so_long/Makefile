# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 15:27:40 by isbraz-d          #+#    #+#              #
#    Updated: 2023/09/05 17:34:27 by isbraz-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CFLAGS = -Wall -Werror -Wextra -g

SRCS = check_map.c save_map.c main.c

OBJS = $(SRCS:.c=.o)

MLX_LIB_DIR = minilibx-linux
MLX_INCLUDE = -Iminilibx-linux
MLX_FLAGS = -L$(MLX_LIB_DIR) -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz -g3 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJS)
	@make -C ./libft/
	@make -C $(MLX_LIB_DIR)
	@$(CC) $(CFLAGS) $(^) libft/libft.a $(MLX_FLAGS) -o $@
	

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) $(MLX_INCLUDE) -c $(^) -o $(@)

clean:
	@rm -f $(OBJS)
	make clean -C ./libft/

fclean: clean
	@rm -f $(NAME)
	make fclean -C ./libft/

re: fclean all

.PHONY: all clean fclean re