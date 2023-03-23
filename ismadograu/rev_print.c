/*Write a function that takes a string and displays the string in reverse
order followed by the newline.
Its prototype is constructed like this : 
  char *ft_rev_print (char *str)
It must return its argument
Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/

#include <unistd.h>
#include <stdio.h>

int	strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		i++;
	}
	printf("%d\n", i); 
	return (i);
}

char	*ft_rev_print (char *str)
{
	int	i;
	int	size;
	int	troca;
	int	aux;
	int	f;

	size = strlength(str);
	i = 0;
	troca = size / 2;
	f = size - 1;
	while (i < troca)
	{
		aux = str[i];
		str[i] = str[f];
		str[f] = aux;
		i++;
		f--;
	}
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return(str);
}

int	main(void)
{
	char	test[] = "Hello";
	ft_rev_print(test);
}
