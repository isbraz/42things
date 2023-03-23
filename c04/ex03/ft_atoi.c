/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:54:28 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/19 13:57:17 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
	{
		return (1);
	}
	return (0);
}

int	ft_operator(char c)
{
	if (c == '-' || c == '+')
	{
		return (1);
	}
	return (0);
}

int	ft_is_number(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_is_negative(char *str, int number)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (!(ft_is_number(str[i])))
	{		
		if (str[i] == '-')
		{	
			c++;
		}
		i++;
	}
	if (c % 2 == 0)
	{
		return (number);
	}
	return (number * -1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	n1;

	i = 0;
	n1 = 0;
	while (str[i] != '\0' && ((ft_is_number(str[i]) || ft_operator(str[i]))
			|| ft_isspace(str[i])))
	{
		if (ft_operator(str[i]) && ft_isspace(str[i + 1]))
			return (0);
		if (ft_is_number(str[i]))
		{
			n = str[i] - 48;
			n1 = (n1 * 10) + n;
			if (!(ft_is_number(str[i + 1])))
			{
				return (ft_is_negative(str, n1));
			}				
		}
		i++;
	}
	return (0);
}

int	main()
{
	char	teste[] = "   1---1";

	printf("%d\n", ft_atoi(teste));
}
