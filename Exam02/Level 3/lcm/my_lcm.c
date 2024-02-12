#include <stdio.h>
#include <limits.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (n % a != 0 || n % b != 0)
		n++;
	return (n);
}

// int	main(void)
// {
// 	printf("%d\n", lcm(4, 5));
// }
