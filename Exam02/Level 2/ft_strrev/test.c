#include <stdio.h>

char *ft_strrev(char *str)
{
	int	lenght = 0;
	int i = 0;
	char temp;

	while (str[lenght])
		lenght++;
	lenght--;
	while (i <= lenght)
	{
		temp = str[i];
		str[i] = str[lenght];
		str[lenght] = temp;
		i++;
		lenght--;
	}
	return (str);
}

int main()
{
	char teste[] = "eu sou burro";

	printf("before: %s\n", teste);
	printf("after: %s\n", ft_strrev(teste));
}
//1st  