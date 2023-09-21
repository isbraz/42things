/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:47:56 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/21 14:33:16 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_move_player(t_game *game, int y, int x) 
{
	if (game->map[game->y + y][game->x + x] != '1' && game->map[game->y + y][game->x + x] != 'E')
	{
		if (game->map[game->y + y][game->x + x] == 'C')
			game->c--;
		game->map[game->y][game->x] = '0';
		game->y += y;
		game->x += x;
		game->map[game->y][game->x] = 'P';
		//print_map(game, &game->win);
	}
	if (game->map[game->y + y][game->x + x] == 'E' && game->c == 0)
	{
		ft_putendl_fd("You won!!!!", 2);
		exit(EXIT_SUCCESS);
	}
	print_map(game, &game->win);
}

int	ft_key(int keycode, t_game *game)
{
	if (keycode == K_ESC)
	{
		ft_putendl_fd("WOW you're giving up!!!!!", 2);
		exit(EXIT_FAILURE);
	}
	if (keycode == KEY_W)
	{
		game->win.pcurrent = game->win.pu;
		ft_move_player(game, -1, 0);
	}
	if (keycode == KEY_S)
	{
		game->win.pcurrent = game->win.pf;
		ft_move_player(game, 1, 0);
	}
	if (keycode == KEY_A)
	{
		game->win.pcurrent = game->win.pl;
		ft_move_player(game, 0, -1);
	}
	if (keycode == KEY_D)
	{
		game->win.pcurrent = game->win.pr;
		ft_move_player(game, 0, 1);
	}
	return (0);
}
