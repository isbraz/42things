/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbraz-d <isbraz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:41:33 by isbraz-d          #+#    #+#             */
/*   Updated: 2023/10/12 13:27:51 by isbraz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}			t_list;

//utils functions
int	ft_strlen(const char *s);
int	ft_atoi(char *s);
int	*list_to_array(t_list *stack);
int	smallest_number(int *list);

//list functions
t_list	*lstnew(int content);
void	lstadd_back(t_list **lst, t_list *new);
void	lstadd_front(t_list **lst, t_list *new);
t_list	*lstlast(t_list *lst);
int	ft_lstsize(t_list *lst);

//moves functions
void	ft_swap(t_list **stack);
void	ft_push(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **stack);
void	ft_rotate_reverse(t_list **stack);

//sort functions
void	sort_two(t_list **stack);
void	sort_three(t_list **stack_s);
void	sort_four_five(t_list **stack_s, t_list **stack_r);

#endif