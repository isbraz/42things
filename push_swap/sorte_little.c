/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte_little.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:51:53 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/10/03 16:23:46 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_s, t_list **stack_r)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_s)->content;
	b = (*stack_s)->next->content;
	c = (*stack_s)->next->next->content;
	if (a > b && b < c && a < c)
		ft_swap(stack_s);
	if (a > b && b > c && a > c)
	{
		
	}
	
}
