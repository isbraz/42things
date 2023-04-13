/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:42:06 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/12 16:37:30 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
