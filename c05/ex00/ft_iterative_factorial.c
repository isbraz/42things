/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:30:24 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/19 12:30:36 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb - 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (n >= 1)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}

/*int	main()
{
	int	n;
	
	n = 20;
	printf("%d\n", ft_iterative_factorial(n));
}*/
