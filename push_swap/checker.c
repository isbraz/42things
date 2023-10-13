/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:10:11 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/10/13 18:02:13 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int     ft_isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        return (0);
}

static int	ft_is_num_equal(int n, int *array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (n == array[i])
		{
			printf("n : %d\n", n);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_numbers(t_list *stack)
{
	t_list	*tmp;
	int	*array;

	array = list_to_array(stack);
	tmp = stack;
	while (tmp)
	{
		if (ft_is_num_equal(tmp->content, array))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_is_sorted(t_list *stack)
{
	int	i;

	i = 0;
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ft_check_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][0] == '-' || argv[i][0] == '+')
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
