/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:44:48 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/10/11 13:12:13 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(char *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		res *= 10;
		res += s[i] - 48;
		i++;
	}
	return (sign * res);
}

int	*list_to_array(t_list *stack)
{
	int	*list;
	int	i;
	
	i = 0;
	list = malloc(sizeof(int) * ft_lstsize(stack));
	while (stack)
	{
		list[i] = stack->content;
		stack = stack->next;
		i++;
	}
	return (list);
}

int	smallest_number(int *list)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = list[i];
	while (list[i])
	{
		if (list[i] < smallest)
			smallest = i;
		i++;
	}
	return (smallest);
}
