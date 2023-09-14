/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:27:25 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/14 16:29:13 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct s_game
{
	char	**map;
	int	x;
	int	y;
	int	nlines;
	int	p;
	int	c;
	int	e;
	int	f;
}		t_game;

typedef struct	s_window
{
	void	*mlx;
	void	*mlx_win;
	void	*bg;
	void	*cimg;
	void	*wimg;
	void	*eimg;
	void	*pf;
	void	*pd;
	void	*pd2;
	void	*pl;
	void	*plw;
	void	*plw2;
	void	*pr;
	void	*prw;
	void	*prw2;
	void	*pu;
	void	*puw;
	void	*puw2;
}		t_window;

#include "mlx/mlx.h"
#include "libft/get_next_line.h"
#include "libft/libft.h"

void	ft_alocate_map(t_game *map, char *map_name);
int	ft_game_validations(t_game *map);
void	ft_copy_map(t_game *game);
void	ft_check_path(t_game *game ,int x, int y, char **map_copy);

# endif