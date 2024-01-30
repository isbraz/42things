#include <unistd.h>

int	is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	char c;
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if ((is_lowercase(av[1][i]) && av[1][i] <= 109) 
				|| (is_uppercase(av[1][i]) && av[1][i] <= 77))
				c = av[1][i] + 13;
			else if((is_lowercase(av[1][i]) && av[1][i] > 109) 
				|| (is_uppercase(av[1][i]) && av[1][i] > 77))
					c = av[1][i] + 13 - 26;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
