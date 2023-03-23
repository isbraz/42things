/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:27:01 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/19 20:27:04 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	int	a;
	int	b;

	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
	{
		return (index);
	}
	a = ft_fibonacci(index - 1);
	b = ft_fibonacci(index - 2);
	return (a + b);
}

/*int	main()
{
	int n = 3;
	int result = ft_fibonacci(n);
	printf("O %d-ésimo elemento da sequência de Fibonacci é %d\n", n, result);
	return (0);
}*/
