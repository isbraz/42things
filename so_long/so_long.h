/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:27:25 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/05 18:59:51 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct s_game
{
	char	**map;
	int	col;
	int	line;
	int	nlines;
	int	p;
	int	c;
	int	e;
}		t_game;

typedef struct	s_data 
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}		t_data;

#include "minilibx-linux/mlx.h"
#include "libft/get_next_line.h"
#include "libft/libft.h"

void	ft_alocate_map(t_game *map, char *map_name);
int	ft_game_validations(t_game map);

# endif