/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:12:55 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/13 12:26:28 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	low(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

int	up(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

int	nu(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (low(str[0]))
			str[0] = str[0] - 32;
		else if (low(str[i - 1]) || up(str[i - 1]) || nu(str[i - 1]))
		{
			if (up(str[i]))
				str[i] = str[i] + 32;
		}
		else if (!(low(str[i - 1]) || up(str[i - 1]) || nu(str[i - 1])))
		{
			if (low(str[i]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	teste[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", teste);
	printf("%s\n", ft_strcapitalize(teste));
}*/
