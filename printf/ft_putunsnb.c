/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:19:04 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/05/04 16:03:35 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_digits(int number)
{
	int	i;

	i = 0;
	if (number < 0)
	{
		number *= -1;
		i++;
	}
	if (number == 0)
		return (1);
	while (number > 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

int	ft_putunsnb(unsigned int number)
{
	int	c;

	c = ft_count_digits(number);
	if (number > 9)
	{
		ft_putunsnb(number / 10);
		ft_putunsnb(number % 10);
	}
	else
		ft_putchar(number + 48);
	return (c);
}

/*
int	main(void)
{
	unsigned int number;

	number = 40;
	ft_putunsnb(40);
}
*/