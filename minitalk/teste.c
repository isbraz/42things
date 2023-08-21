#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>


void	signal_handler(int pid)
{
	write(1, "oi",2);
}

int main(void)
{
	int i = 0;
	signal(SIG, signal_handler);
	while (1)
	{
		i++;
	//	printf("hello word : %d", getpid());
	}
}
