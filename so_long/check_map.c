/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:10:50 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/08/31 12:22:20 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_first_and_last_line(t_map map)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	while (map.map[0][j] == '1')
		j++;
	while (map.map[map.nlines - 1] && map.map[map.nlines - 1][i] == '1')
		i++;
	if (j == (ft_strlen(map.map[0]) - 1) \
	&& (i == ft_strlen(map.map[map.nlines - 2]) \
	|| i == ft_strlen(map.map[map.nlines - 1])))
		return (1);
	return (0);
}

static int	ft_check_content(t_map map)
{
	static int	i;
	int		j;

	j = 0;
	while (map.map[i] && map.map[i] != NULL && map.map[i][j] != '\0')
	{
		if (map.map[i][j] == 'P')
			map.p++;
		if (map.map[i][j] == 'C')
			map.c++;
		if (map.map[i][j] == 'E')
			map.e++;
		if (map.map[i][j] == '\n')
		{
			j = 1;
			i++;
		}
		j++;
	}
	if (map.p == 1 && map.e == 1 && map.c >= 1)
		return (1);
	return (0);
}

static int	ft_check_position(t_map map)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = map.nlines - 1;
	while (map.map[i] && map.map[i][0] == '1')
		i++;
	while (map.map[j] && (map.map[j][ft_strlen(map.map[j]) - 2] == '1' 
		|| map.map[j][ft_strlen(map.map[j]) - 1] == '1'))
		j++;
	if (i == l && j == l)
		return (1);
	return (0);
}

static int	ft_is_line_equal(t_map map)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(map.map[0]);
	while (ft_strlen(map.map[i]) == j)
		i++;
	if (map.map[i] == NULL || ft_strlen(map.map[i - 1]) == j)
		return (1);
	return (0);
}

int	ft_map_validations(t_map map)
{
	ft_is_line_equal(map);
	ft_first_and_last_line(map);
	if (ft_is_line_equal(map) && ft_first_and_last_line(map)
	 	&& ft_check_position(map) && ft_check_content(map))
	 	return (1);
	ft_putstr_fd("error\n", 2);
	return (0);
}
