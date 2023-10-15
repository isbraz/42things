/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:18:10 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/10/15 16:22:13 by isbraz-d         ###   ########.fr       */
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

void    ft_putstr_fd(char *s, int fd)
{
        int     i;

        i = 0;
        while (s[i] != '\0')
        {
                write(fd, &s[i], 1);
                i++;
        }
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
	if (!list)
		return (NULL);
	while (stack)
	{
		list[i] = stack->content;
		stack = stack->next;
		i++;
	}
	return (list);
}

int	smallest_number(int *list, int size)
{
	int	i;
	int	smallest;
	int	small_index;

	i = 0;
	small_index = 0;
	smallest = list[i];
	while (i < size)
	{
		if (list[i] < smallest)
		{
			smallest = list[i];
			small_index = i;
		}
		i++;
	}
	return (small_index);
}
