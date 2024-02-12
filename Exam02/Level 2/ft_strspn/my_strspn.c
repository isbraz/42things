#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;
	size_t	j = 0;
	size_t l = 0;

	while (accept[l])
		l++;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (j == l)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	printf("original %ld\n", strspn("hello", "l0"));
	printf("mine %ld\n", ft_strspn("hello", "l0"));
}
