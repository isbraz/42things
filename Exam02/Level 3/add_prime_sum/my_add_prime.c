#include <unistd.h>
#include <stdio.h>

void	putnbr(int n)
{
	char c;

	if (n > 9)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else
	{
		c = n + 48;
		write(1, &c, 1);
	}
}

int	ft_atoi(char *str)
{
	int	res = 0;
	int sign = 1;
	int i = 0;

	while (str[i] == ' ' && (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

int	is_prime(int n)
{
	int	i = 2;
	int s = n / 2;

	if (n % 2 == 0 && n > 2)
		return (0);
	while (i < s)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int	i = 0;
	int s = 0;
	int	n;

	if (av[1])
		n = ft_atoi(av[1]);
	if (ac == 2)
	{
		while (n > 1)
		{
			if (is_prime(n))
			{
				s += n;
			}
			n--;
		}
	}
	putnbr(s);
	write(1, "\n", 1);
	return (0);
}
