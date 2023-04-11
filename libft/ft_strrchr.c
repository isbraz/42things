/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:42:06 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/11 22:30:45 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t	last_pos;

	last_pos = ft_strlen(s) - 1;
	while (last_pos >= 0)
	{
		if (last_pos == c)
		{
			return ((char *)s + s[last_pos]);
		}
		last_pos--;
	}
	return (NULL);
}
