/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:51:23 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/11 21:27:16 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	lendest;
	unsigned int	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	index = 0;
	if (size <= lendest)
	{
		return (lensrc + size);
	}
	while ((index < size - lendest - 1) && src[index] != '\0')
	{
		dest[lendest + index] = src[index];
		index++;
	}
	dest[lendest + index] = '\0';
	return (lendest + lensrc);
}

/*int	main(void)
{
	char	dest[20] = "avanti";
	char	src[] = " palestra";

	printf("%s\n", src);
	//ft_strlcat(dest, src, 2);
	printf("%s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, 16));
	printf("After: %s\n", src);
	printf("After: %s\n", dest);
}*/