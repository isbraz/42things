/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:44:14 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/10/12 18:01:11 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	check_argv(char **argv)
// {
// 	int	i;
// 	int	j;

// 	j = 1;
// 	i = 0;
	
// }

void	ft_create_stack(t_list **stack, char **argv)
{
	int	i;

	i = 2;
	*stack = lstnew(ft_atoi(argv[1]));
	while (argv[i])
	{
		lstadd_back(stack, lstnew(ft_atoi(argv[i])));
		i++;
	}	
}
int	main(int ac, char **argv)
{
	t_list	*stack_a;
	// t_list	*stack_b;
	t_list	*tmp;

	stack_a = NULL;
	if (ac < 2)
		return (0);
	ft_create_stack(&stack_a, argv);
	tmp = stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}

// int	main()
// {
// 	t_list	*stack_a;
// 	//t_list	*stack_b;
// 	t_list	*tmp;

// 	stack_a = lstnew(1);
// 	// stack_b = NULL; 
// 	lstadd_back(&stack_a, lstnew(0));
// 	lstadd_back(&stack_a, lstnew(2));
// 	lstadd_back(&stack_a, lstnew(-3));
// 	lstadd_back(&stack_a, lstnew(-4));
// 	tmp = stack_a;
// 	printf("before stack a:\n");
// 	while (tmp)
// 	{
// 		printf("%d\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// 	// ft_swap(&stack_a);
// 	// ft_push(&stack_a, &stack_b);
// 	ft_rotate(&stack_a);
// 	// ft_rotate_reverse(&stack_a);
// 	printf("after stack a:\n");
// 	tmp = stack_a;
// 	while (tmp)
// 	{
// 		printf("%d\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// 	// while (stack_b)
// 	// {
// 	// 	printf("stack b: %d\n", stack_b->content);
// 	// 	stack_b = stack_b->next;
// 	// }
// }
