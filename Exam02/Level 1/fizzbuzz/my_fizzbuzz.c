/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_fizzbuzz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:48:42 by isbraz-d          #+#    #+#             */
/*   Updated: 2024/01/25 15:13:30 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_number(int n)
{
	char c;

	if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
	{
		c = n + 48;
		write(1, &c, 1);
	}
}

int	main(void)
{
	int i = 1;
	
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
		{
			write(1, "fizz\n", 5);
			i++;
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			write(1, "buzz\n", 5);
			i++;
		}
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			write(1, "fizzbuzz\n", 9);
			i++;
		}
		else
		{
			print_number(i);
			write(1, "\n", 1);
			i++;
		}
	}
}
