#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	calc_diff(int start, int end)
{
	int	i = 0;

	if (start < end)
	{
		while (start <= end)
			start++;
		return (start);
	}
	else if (start > end)
	{
		while (end <= start)
			end++;
		return (end);
	}
	return (0);
}

int     *ft_range(int start, int end)
{
	int	*arr;
	int i = 0;

	arr = malloc(sizeof(int) * calc_diff(start, end));
	if (!arr)
		return (NULL);
	while (start <= end)
	{
		arr[i] = start;
		start++;
		i++;
	}
	return (arr);
}

int main()
{
	int start = 1;
	int end = 3;
	int *arr = ft_range(start, end);
	int i = 0;

	while (arr[i])
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
