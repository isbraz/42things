/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:27:25 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/04 17:54:29 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct s_map
{
	char	**map;
	int	col;
	int	line;
	int	nlines;
	int	p;
	int	c;
	int	e;
}		t_map;




#include "minilibx-linux/mlx.h"
#include "libft/get_next_line.h"
#include "libft/libft.h"

void	ft_alocate_map(t_map *map, char *map_name);
int	ft_map_validations(t_map map);

# endif