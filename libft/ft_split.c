/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:09:52 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/04/19 18:01:17 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char *str, char c)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (str[i])
	{
		if (i == 0)
			p++;
		else if (str[i] == c)
			p++;
		i++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**allstr;
	size_t	nwords;

	
	 
}