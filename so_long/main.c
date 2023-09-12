/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:49:36 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/07 19:57:58 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **argv)
{
	t_game	map;
	void	*mlx;
	void	*mlx_win;

	if (ac != 2)
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	ft_memset(&map, 0, sizeof(t_game));
	ft_alocate_map(&map, argv[1]);
	ft_game_validations(map);
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 200, 100, "Hello world!");
	mlx_loop(mlx);
}
