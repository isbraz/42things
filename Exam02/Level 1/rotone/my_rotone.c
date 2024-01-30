#include <unistd.h>

int	is_letter(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	char	c;
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (is_letter(av[1][i]))
			{
				if (av[1][i] == 'Z' || av[1][i] == 'z')
					c = av[1][i] - 25;
				else
					c = av[1][i] + 1;
			}
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
