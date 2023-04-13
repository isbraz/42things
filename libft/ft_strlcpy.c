/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:40:20 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/12 18:14:25 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	lensrc = 0;

	index = 0;
	lensrc = ft_strlen(src);
	if (size != 0)
	{
		while (src[index] != '\0' && index < size)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}	
	return (lensrc);
}


/*int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "World";

	printf("%d\n", strlcpy(dest, src, 10));

}*/
