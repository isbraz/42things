#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

// int count_words(char *s)
// {
// 	int i = 0;
// 	int w = 0;
// 	int j = 0;

// 	while (s[i])
// 	{
// 		if (is_whitespace(s[i]))
// 		{
// 			k = i;
// 			w++;
// 		}
// 		i++;
// 	}
// }

// char **ft_split(char *s)
// {
// 	char **strs;
// 	int i = 0;

// 	strs = ;
// }

void ft_word(char *str, int counter)
{
	int i = 0;
	char *str2 = NULL;

	if (!*str)
		return ;
	while (is_whitespace(*str))
		str++;
	while (str[i] && !is_whitespace(str[i]))
		i++;
	if (counter > 0 && i)
		write(1, " ", 1);
	write(1, str, i);
	ft_word(str + i, counter + 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_word(av[1], 0);
	write(1, "\n", 1);
}
