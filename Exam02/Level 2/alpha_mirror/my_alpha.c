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
	char	alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char	rev_alph[] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;
	int	j = 0;
	char	c;

	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (is_uppercase(c))
			{
				c = av[1][i] + 32;
				j = 0;
				while (alpha[j] != c)
					j++;
				c = rev_alph[j] - 32;
			}
			else if (is_lowercase(c))
			{
				j = 0;
				while (alpha[j] != c)
					j++;
				c = rev_alph[j];
			}
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
