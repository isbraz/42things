#include "get_next_line.h"

int	main(void)
{
	int	fd;
	int	bytes;
	char	buff[BUFFER_SIZE];

	bytes = 1;
	fd = open("teste.txt", O_RDONLY);
	while (bytes > 0)
	{
		bytes = read(fd, 0, 0);
		printf("%d", bytes);
		buff[bytes] = '\0';
		printf("%s", buff);
	}
	printf("\n");
}
