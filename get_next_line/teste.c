/*#include "get_next_line.h"

int	main(void)
{
	int	fd;
	int	bytes;
	char	buff[BUFFER_SIZE + 1];

	bytes = 1;
	fd = open("teste.txt", O_RDONLY);
	while (bytes > 0)
	{
		bytes = read(fd, buff, 3);
		buff[bytes] = '\0';
		printf("%s", buff);
	}
	printf("\n");
}
*/
