/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:09:29 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/21 11:09:31 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*values;
	int	i;
	int	size;

	size = max - min;
	i = 0 ;
	values = malloc(sizeof(int) * size);
	if (values == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		values[i] = min;
		i++;
		min++;
	}
	if (min >= max)
	{
		return (0);
	}
	return (values);
}

/*int	main()
{
	int	maximo = 5;
	int	minimo = 10;
	int	*range;
	int	i;

	range = ft_range(minimo, maximo);
	if (range == NULL)
	{
		printf("Error: invalid range\n");
		return (1);
	}
	for (i = 0; i < maximo - minimo; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
}*/