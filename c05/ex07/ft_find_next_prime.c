/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:49:28 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/20 20:49:31 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	if (n < 0 || n == 1)
	{
		return (0);
	}
	while (i < n / i)
	{
		if (n % i == 0)
		{
			return (0);
		}	
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	else
	{
		while (!(ft_is_prime(nb)))
		{
			nb++;
		}
	}
	return (nb);
}

/*int	main()
{
	int	teste;

	teste = 2147483648;
	printf("%d\n", ft_find_next_prime(teste));
	return (0);
}*/
