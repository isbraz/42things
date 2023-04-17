/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:35:15 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/16 15:41:17 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return ((unsigned char)s1[i] - ((unsigned char)s2[i]));
		}
		else if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - ((unsigned char)s2[i]));
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	teste[] = "abdd";
	char	teste2[] = "abdefg";

	printf("%d\n", ft_strncmp(teste, teste2, 4));
}*/