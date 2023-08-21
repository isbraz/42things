/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:27:25 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/08/18 16:33:37 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct s_all
{
	char	**map;
	int	col;
	int	line;
}		t_all;


#include "minilibx-linux/mlx.h"
#include "libft/get_next_line.h"
#include "libft/libft.h"



# endif