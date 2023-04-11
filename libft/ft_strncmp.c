/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.com.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:35:15 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/11 22:29:57 by isbraz-d         ###   ########.fr       */
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
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && (i < n - 1))
	{		
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	teste[] = "abdd";
	char	teste2[] = "abdefg";

	printf("%d\n", ft_strncmp(teste, teste2, 4));
}*/