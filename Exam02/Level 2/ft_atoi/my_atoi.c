#include <stdio.h>
#include <stdlib.h>

int	is_whitespace(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign = 1;
	int i = 0;
	int	res = 0;

	while (str[i] == ' ' || is_whitespace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

int main()
{
	printf("mine: %d\n", ft_atoi("98aaa"));
	printf("original: %d\n", atoi("98aaa"));
}
