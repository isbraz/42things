#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	char	*dup;
	int	i = 0;

	while (src[i])
		i++;
	dup = malloc(sizeof(char) * i + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main()
{
	char *s;
	char o[] = "hello";

	printf("%s\n", ft_strdup(o));
}