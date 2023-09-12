/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:09:03 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/07 20:58:24 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	(t_game *game)
{
	char	**map_copy;
	int		i;

	i = 0;
	while(game.map[i])
	{
		map_copy[i] = ft_strdup(game->map[i]);
		i++;
	}
}

void	ft_check_path(int x, int y, t_game game)
{
	
}
