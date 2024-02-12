#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
	int i = 2;
	int j = n / 2;

	while (i < j)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int n;
	int i = 2;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n < 1)
		{
			printf("\n");
			return (0);
		}
		if (is_prime(n))
		{
			printf("%d\n", n);
			return (0);
		}
		while (n > 1 && i <= n)
		{
			if (is_prime(i) && n % i == 0)
			{
				printf("%d", i);
				if (i != n)
					printf("*");
				n /= i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
}
