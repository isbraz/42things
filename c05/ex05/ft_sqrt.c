/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:52:14 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/20 13:52:19 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	odd;
	int	index;

	odd = 1;
	index = 0;
	while (nb > 0)
	{
		nb = nb - odd;
		odd += 2;
		index++;
	}
	if (nb == 0)
	{
		return (index);
	}
	return (0);
}

/*int	main()
{
	int	teste = 100;

	printf("a raiz quadrada e: %d\n", ft_sqrt(teste));
}*/
