/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:40:29 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/03/06 18:40:33 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	troca;
	int	auxiliar;

	i = 0;
	f = size -1;
	troca = size / 2;
	while (i < troca)
	{
		auxiliar = tab[i];
		tab[i] = tab[f];
		tab[f] = auxiliar;
		i++;
		f--;
	}	
}
