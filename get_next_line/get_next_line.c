/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:03:33 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/05/10 12:26:47 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char	*line;
	int	i;

	line = NULL;
	i = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (0);
	
}