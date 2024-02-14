#include <stdio.h>

int is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int convert_digit(char c)
{
	if (c >= 'A' && c <= 'F')
		c = c + 32;
	if (c >= '0' && c <= '9')
		return (c - 48);
	else if (c >= 'a' && c <= 'f')
		return (c - 97 + 10);
	else 
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int sign = 1;
	int result = 0;
	int digit_value;

	while (is_whitespace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		digit_value = convert_digit(*str);
		if (digit_value >= str_base || digit_value == -1)
			break;
		result = result * str_base + digit_value;
		str++;
	}
	return (result * sign);
}

int main()
{
	printf("%d\n", ft_atoi_base("102101", 2));
}

// 0123456789abcdef
