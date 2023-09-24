/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:27:25 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/24 13:32:08 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SO_LONG_H
# define SO_LONG_H

enum
{
	KEY_W = 119,
	KEY_D = 100,
	KEY_A = 97,
	KEY_S = 115,
	A_UP = 65362,
	A_DOWN = 65364,
	A_LEFT = 65361,
	A_RIGHT = 65363,
	K_ESC = 65307
};

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
	int	cp;
	int	e;
	int	f;
	int	m;
	t_window win; 
}		t_game;

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
int     ft_key(int keycode, t_game *game);
void	exit_game(t_game *game, int f);
void	free_map(char **map);

# endif