/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:46:41 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/10/04 18:13:54 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **stack)
{
	t_list	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	ft_push(t_list **stack_s, t_list **stack_r)
{
	t_list	*tmp;

	if (!*stack_s)
		return ;
	tmp = *stack_s;
	*stack_s = (*stack_s)->next;
	tmp->next = *stack_r;
	*stack_r = tmp;
}

void	ft_rotate(t_list **stack)
{
	t_list	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	lstadd_back(stack, tmp);
	tmp->next = NULL;
}

void	ft_rotate_reverse(t_list **stack)
{
	t_list	*last;
	t_list	*first;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = lstlast(*stack);
	while (first->next->next)
		first= first->next;
	first->next = NULL;
	lstadd_front(stack, last);
}
