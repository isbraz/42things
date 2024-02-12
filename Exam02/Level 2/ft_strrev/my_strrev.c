#include <stdio.h>

int	len(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	char temp;
	int length = len(str);
	int	i = 0;
	int j = length - 1;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

int main()
{
	char test[] = "hello";

	printf("%s\n", ft_strrev(test));
}

