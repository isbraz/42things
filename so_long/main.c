/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:49:36 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/15 15:39:54 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **argv)
{
	t_game	game;
	t_window	window;

	if (ac != 2)
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	ft_memset(&game, 0, sizeof(t_game));
	ft_alocate_map(&game, argv[1]);
	ft_game_validations(&game);
	ft_copy_map(&game);
	// printf("numero de coletaveis :%d\n", game.c);
	window.mlx = mlx_init();
	window.mlx_win = mlx_new_window(window.mlx, ((int)ft_strlen(game.map[0]) - 2) * 32, (game.nlines - 1) * 32, "Hello world!");
	ft_init_images(&window);
	print_map(&game, &window);
	mlx_loop(window.mlx);
}
