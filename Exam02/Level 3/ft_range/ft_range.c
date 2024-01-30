#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len = ((end - start)) + 1;
	if (len < 0)
		len *= -1;
	int *res = (int *)malloc(sizeof(int) * len);
	
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
        return (res);
}
