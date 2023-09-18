/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:27:25 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/18 17:42:32 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

typedef struct	s_window
{
	void	*mlx;
	void	*mlx_win;
	void	*bg;
	void	*cimg;
	void	*wimg;
	void	*eimg;
	void	*pf;
	void	*pl;
	void	*pr;
	void	*pu;
	void	*pcurrent;
}		t_window;

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
	t_window win; 
}		t_game;


// typedef struct s_player
// {
// 	int	x;
// 	int	y;
// }		t_player;


#include "mlx/mlx.h"
#include "libft/get_next_line.h"
#include "libft/libft.h"

void	ft_alocate_map(t_game *map, char *map_name);
int	ft_game_validations(t_game *map);
void	ft_copy_map(t_game *game);
void	ft_check_path(t_game *game ,int x, int y, char **map_copy);
void	ft_init_images(t_window *window);
void	put_image(t_window *window, int x, int y, int option);
void	print_map(t_game *game, t_window *window);

# endif