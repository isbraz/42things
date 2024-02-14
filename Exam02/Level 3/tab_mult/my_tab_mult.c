#include <unistd.h>
#include <stdio.h>

int is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	int sign = 1;

	while (is_whitespace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

void	ft_putnbr(int n)
{
	char c;

	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + 48;
		write (1, &c , 1);
	}
}

int main(int ac, char **av)
{
	int i = 1;
	int n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(n * i);
			write(1, "\n", 1);
			i++;
		}
	}
	write (1 ,"\n", 1);
}
