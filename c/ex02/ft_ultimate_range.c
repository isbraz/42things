/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:00:43 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/21 16:00:47 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (*range == 0)
	{
		return (-1);
	}	
	if (min >= max)
	{
		return (0);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

/*int	main()
{
	int	maximo = 10;
	int	minimo = 5;
	int	*array;
	int	index = 0;

	printf("tamanho:%d\n", ft_ultimate_range(&array, minimo, maximo));
	while(index < maximo - minimo)
	{
		printf(" %i,", array[index]);
		index++;
	}
}*/