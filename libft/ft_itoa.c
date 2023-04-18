/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:35:41 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/18 12:15:37 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_reverse_string(char *s1, size_t size)
{
	int	i;
	int	f;
	int	aux;

	i = 0;
	f = size - 1;
	while (i < (size / 2))
	{
		aux = s1[i];
		s1[i] = s1[f];
		s1[f] = aux;
		i++;
		f--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int	number;
	int	digit;
	int	i;

	i = 0;
	number = n;
	while (number > 0)
	{
		number /= 10;
		i++;
	}
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	number = n;	
	while (number > 0)
	{
		digit = number % 10;
		str[i++] = digit + 48;
		number /= 10;
	}
	str[i] = '\0';
	ft_reverse_string(str, i);
	return (str);
}

char	*ft_itoa_teste(int n)
{
	char	*str;
	size_t	number;
	size_t	digit;
	size_t	i;

	i = 0;
	number = n;
	while (number > 0)
	{
		digit = number % 10;
		str[i++] = digit + 48;
		number /= 10;
	}
	str = (char *)malloc(sizeof(char) * i + 1);
	str[i] = '\0';
	ft_reverse_string(str, i);
	return (str);
}

int	main(void)
{
	int	number = 2020;
	printf("%s\n", ft_itoa_teste(number));
	printf("%s\n", ft_itoa(number));
}