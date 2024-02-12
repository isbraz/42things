#include <unistd.h>
#include <stdio.h>

int is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int check_str(char *str, int i)
{
	while (str[i])
	{
		if (!is_whitespace(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 0;
	char c;

	if (ac == 2)
	{
		while (av[1][i])
		{
			c = av[1][i];
			if (is_whitespace(c))
			{
				i++;
				continue;
			}
			if (!is_whitespace(c))
			{
				write(1, &c, 1);
				if (is_whitespace(av[1][i + 1]) && !check_str(av[1], i + 1))
					write(1, " ", 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
