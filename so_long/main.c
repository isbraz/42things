/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:49:36 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/17 11:30:44 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// static int	check_fd(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	if (str[i - 4] != '.' && str[i - 3] != 'b' && str[i - 2] != 'e' \
// 	&& str[i - 1] != 'r')
// 	{
// 		printf("entrei");
// 		return (0);
// 	}
// 	return (1);
// }

int	main(int ac, char **argv)
{
	t_game	game;
	t_window	window;

	if (ac != 2)
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	if ((!check_fd(argv[1])))
	{
		ft_putendl_fd("Error", 2);
		exit(EXIT_FAILURE);
	}
	
	ft_memset(&game, 0, sizeof(t_game));
	ft_alocate_map(&game, argv[1]);
	check_fd(argv[1]);
	ft_game_validations(&game);
	ft_copy_map(&game);
	// printf("numero de coletaveis :%d\n", game.c);
	window.mlx = mlx_init();
	window.mlx_win = mlx_new_window(window.mlx, ((int)ft_strlen(game.map[0]) - 2) * 32, (game.nlines - 1) * 32, "Hello world!");
	ft_init_images(&window);
	print_map(&game, &window);
	mlx_loop(window.mlx);
}
