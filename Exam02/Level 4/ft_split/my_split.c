#include <stdlib.h>
#include <stdio.h>

int is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int count_words(char *str)
{
	int w = 0;
	int i = 0;
	int k = 0;

	while (str[i])
	{
		if (is_whitespace(str[i]))
		{
			k = i;
			w++;
		}
		i++;
	}
	if (str[k + 1])
		w++;
	return (w);
}

char *create_word(char *str, int i)
{
	char *word;
	int	j = 0;

	word = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!word)
		return (NULL);
	while (str[i] && !is_whitespace(str[i]))
		word[j++] = str[i++];
	word[j] = '\0';
	return (word);
}

char **ft_split(char *str)
{
	char **words;
	int i = 0;
	int j = 0;

	words = (char **)malloc(sizeof(char *) * count_words(str) + 1);
	if (!words)
		return (NULL);
	while (str[i])
	{
		while (is_whitespace(str[i]) && str[i + 1] != '\0')
			i++;
		if (!is_whitespace(str[i]))
		{
			words[j] = create_word(str, i);
			j++;
			while (!is_whitespace(str[i]) && str[i + 1] != '\0')
				i++;
		}
		i++;
	}
	words[j] = NULL;
	return (words);
}


// int main(void)
// {
// 	int i = 0;
// 	char teste[] = "three words apart";
// 	char **splitted = ft_split(teste);

// 	while (splitted[i])
// 	{
// 		printf("%s\n", splitted[i]);
// 		i++;
// 	}
// 	return (0);
// }
