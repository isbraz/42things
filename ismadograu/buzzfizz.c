#include <unistd.h>


int	ft_divsevenfor(int nb)
{
	if (nb % 4 == 0 && nb % 7 == 0) 
	{
		return (1);
	}
	return (0);
}

int	ft_divseven(int nb)
{
	if (nb % 7 == 0)
	{
		return (1);
	}
	return(0);
}

int	ft_divfor(int nb)
{
	if (nb % 4 == 0)
	{
		return (1);
	}
	return (0);
}

void	ft_printnbr(int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_printnbr(nb / 10);
		ft_printnbr(nb % 10);	
	}
	else
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	
}

int	main(void)
{
	int	n;

	n = 1;
	while (n >= 1 && n <= 100)
	{
		if(!(ft_divfor(n)) && !(ft_divseven(n)) && !(ft_divsevenfor(n)))
		{
			ft_printnbr(n);
		}
		if (ft_divfor(n) && !(ft_divseven(n)))
		{
			write(1, "buzz", 4);
		}
		if (ft_divseven(n) && !(ft_divfor(n)))
		{
			write(1, "fizz", 4);
		}
		if (ft_divsevenfor(n))
		{
			write(1, "buzzfizz", 8);
		}
		write(1, "\n", 1);
		n++;
	}
	return (0);
}