#include "my_ft_lst_size.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*lst_new(int test)
{
	t_list *new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->data = test;
	new_list->next = NULL;
	return (new_list);
}

void	lst_add_back(t_list **lst ,t_list *add)
{
	t_list *current;

	current = *lst;
	if (!*lst)
	{
		*lst = add;
		return ;
	}
	while (current->next)
		current= current->next;
	current->next = add;
}

void print_list(t_list *teste)
{
	while (teste)
	{
		printf("%d\n", teste->data);
		teste = teste->next;
	}
}

int	ft_list_size(t_list *begin_list)
{
	int	i = 0;

	if (!begin_list)
		return (0);
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

int	main()
{
	t_list *test;

	test = NULL;
	lst_add_back(&test, lst_new(29));
	lst_add_back(&test, lst_new(29));
	print_list(test);
	printf("size: %d\n", ft_list_size(test));
}
