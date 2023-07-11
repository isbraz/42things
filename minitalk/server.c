/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:57:09 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/07/11 15:46:52 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	ft_convert_bin_to_number(char *str)
{
	int	i;
	int	j;
	int	n;
	char	*aux;

	i = 0;
	n = 0;
	j = 0;
	aux = str;
	while (aux[i])
		i++;
	while (j < i)
	{
		n = (n * 2) + (aux[j] - '0');
		j++;
	}
	return (n);
}

void	signal_handler(int sig)
{
	static char	str[9];
	static int	i;
	int	b;
	char	c;

	if (sig == 10)
	{
		str[i] = '1';
		i++;
	}
	else
	{
		str[i] = '0';
		i++;
	}
	if (i == 8)
	{
		str[i] = '\0';
		b = ft_convert_bin_to_number(str);
		c = (char)b;
		i = 0;
		write(1, &c, 1);
	}
}

int	main(void)
{
	int	p;

	p = getpid();
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	printf("pid: %d\n", p);
	printf("waiting for message ...\n");
	while (1)
	{
		sleep(1);
	}
	return (0);
}
