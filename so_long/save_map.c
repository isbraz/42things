/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:06:15 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/09/05 17:22:10 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_count_lines(int fd, char *map_name)
{
	int		i;
	char	*line;

	i = 1;
	fd = open(map_name, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_fd("error\n", 2);
		return (0);
	}
	line = get_next_line(fd);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		i++;
	}
	close(fd);
	return (i);
}

void	ft_alocate_map(t_game *map, char *map_name)
{
	int	fd;
	int	i;

	i = 0;
	fd = open (map_name, O_RDONLY);
	map->nlines = ft_count_lines(fd, map_name);
	map->map = malloc(sizeof(char *) * (map->nlines + 1));
	if (fd < 0)
		exit(0);
	while (i < map->nlines)
	{
		map->map[i] = get_next_line(fd);
		i++;
	}
	map->map[i] = NULL;
	close(fd);
}
