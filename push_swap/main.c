/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:44:14 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/10/02 17:50:43 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main()
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = lstnew(1);
	stack_b = NULL; 
	lstadd_back(&stack_a, lstnew(0));
	lstadd_back(&stack_a, lstnew(2));
	// ft_swap(&stack_a);
	// ft_push(&stack_a, &stack_b);
	while (stack_a)
	{
		printf("stack a: %d\n", stack_a->content);
		stack_a = stack_a->next;
	}
	while (stack_b)
	{
		printf("stack b: %d\n", stack_b->content);
		stack_b = stack_b->next;
	}
}
