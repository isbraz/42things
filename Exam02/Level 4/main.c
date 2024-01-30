#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_carecagay
{
	char	*teste;
	struct s_carecagay *next;
}			t_fdp;

t_fdp	*lst_new(char *teta)
{
	t_fdp *new;

	new = malloc(sizeof(t_fdp));
	if (!new)
		return (NULL);
	new->teste = strdup(teta);
	new->next = NULL;
	return (new);
}

void	lst_add_back(t_fdp **lucas ,t_fdp *add)
{
	if (!*lucas)
	{
		*lucas = add;
		return ;
	}
	while ((*lucas)->next)
	{
		*lucas = (*lucas)->next;
	}
	(*lucas)->next = add;
}	

int	main()
{
	t_fdp *lucas;

	lucas = NULL;
	// lucas = lst_new("lucas");
	lst_add_back(&lucas, lst_new("viado"));
	while (lucas)
	{
		printf("%s\n", lucas->teste);
		lucas = lucas->next;
	}
}
