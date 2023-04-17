/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:34:11 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/16 11:22:31 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*sc;
	char		*dst;
	size_t		i;

	sc = src;
	dst = dest;
	i = 0;
	if (dst <= sc || dst >= (sc + n))
	{
		while (i < n)
		{
			dst[i] = sc[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i)
		{
			dst[i] = sc[i];
			i--;
		}
	}
	return (dest);
}
