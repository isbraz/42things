/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:25:02 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/17 12:25:05 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_parameters(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
			i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*teste;

	teste = *a;
	*a = *b;
	*b = teste;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{		
		i++;
	}	
	if ((s1[i] - s2[i]) > 0)
	{
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	n = 1;
	while (n < argc)
	{
		i = 1;
		while (i < argc - 1)
		{		
			if (ft_strcmp(argv[i], argv[i + 1]))
			{
				ft_swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		n++;
	}
	n = 1;
	while (n < argc)
	{
		ft_print_parameters(argv[n]);
		n++;
	}
	return (0);
}
