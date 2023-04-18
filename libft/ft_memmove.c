/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:34:11 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/18 19:37:50 by isbraz-d         ###   ########.fr       */
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
	if (dest == NULL && src == NULL)
		return (NULL);
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
		while (n > 0)
		{
			dst[n - 1] = sc[n - 1];
			n--;
		}
	}
	return (dest);
}
