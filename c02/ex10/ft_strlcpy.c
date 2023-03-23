/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:34:44 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/13 12:22:06 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *stre)
{
	int	i;

	i = 0;
	while (stre[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	f;

	i = 0;
	f = length(src);
	if (size != 0)
	{
		while (i < size && src[i] != '\0')
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}	
	return (f);
}
