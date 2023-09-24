/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:08:36 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/22 13:24:44 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	destroy_images(t_game *game)
{
	mlx_destroy_image(game->win.mlx, game->win.pu);
	mlx_destroy_image(game->win.mlx, game->win.pf);
	mlx_destroy_image(game->win.mlx, game->win.pl);
	mlx_destroy_image(game->win.mlx, game->win.pr);
	mlx_destroy_image(game->win.mlx, game->win.eimg);
	mlx_destroy_image(game->win.mlx, game->win.cimg);
	mlx_destroy_image(game->win.mlx, game->win.bg);
	mlx_destroy_image(game->win.mlx, game->win.wimg);
}

void	free_map(char **map)
{
	int	i;
	
	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	exit_game(t_game *game, int f)
{
	if (f == 0)
	{
		ft_putendl_fd("Error Invalid map", 2);
		free_map(game->map);
		exit(EXIT_FAILURE);
	}
	if (f == 1)
	{
		ft_putendl_fd("Lol you're giving up!!!!", 2);
		free_map(game->map);
		destroy_images(game);
		free(game->win.mlx);
		free(game->win.mlx_win);
		exit(EXIT_FAILURE);
	}
	if (f == 2)
	{
		ft_putendl_fd("You won!!!!", 2);
		free_map(game->map);
		destroy_images(game);
		free(game->win.mlx);
		free(game->win.mlx_win);
		exit(EXIT_SUCCESS);
	}
}
