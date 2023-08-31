/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:49:36 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/08/31 12:04:25 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **argv)
{
	t_map	map;
	int	i;

	i = 0;
	ft_memset(&map, 0, sizeof(t_map));
	ft_alocate_map(&map, argv[1]);
	ft_map_validations(map);
	/*while (map.map[i])
	{
		printf("%s", map.map[i]);
		i++;
	}*/
}
