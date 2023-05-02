#include <stdio.h>
#include <unistd.h>

void	hexadecimal(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		hexadecimal(n / 16);
		hexadecimal(n % 16);
	}
	else
		write(1, &hex[n], 1);
}

int	main(void)
{
	int number = 60;
	hexadecimal(number);
}
