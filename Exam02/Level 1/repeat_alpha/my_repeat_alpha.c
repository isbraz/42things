#include <stdio.h>
#include <unistd.h>

int	is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int n;
	int	j;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (is_uppercase(av[1][i]) || is_lowercase(av[1][i]))
			{
				j = 0;
				if(is_uppercase(av[1][i]))
					n = av[1][i] - 64;
				else
					n = av[1][i] - 96;
				while (j < n)
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			if (!is_uppercase(av[1][i]) && !is_lowercase(av[1][i]))
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}


/*
	uppercase (-64)
	lowwrcase (-96)
*/