/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:18:19 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/21 13:53:10 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0 || nb == 1)
	{
		return (0);
	}
	while (i < nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}	
		i++;
	}
	return (1);
}

/*int	main()
{
	int	teste;

	teste = 2147483647;
	printf("%d\n", ft_is_prime(teste));
	return (0);
}*/
