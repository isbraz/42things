/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:49:36 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/08/31 13:10:32 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **argv)
{
	t_map	map;

	if (ac != 2)
	{
		ft_putendl_fd("error", 2);
		exit(EXIT_FAILURE);
	}
	ft_memset(&map, 0, sizeof(t_map));
	ft_alocate_map(&map, argv[1]);
	ft_map_validations(map);
}
