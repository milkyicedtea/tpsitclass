//only works in linux

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{ 
	int fork1 = fork();
	if (fork1 == 0)
	{  
		printf("---------------------\n");
		printf(" 1a) Sono il primo processo figlio con pid: %d\n", getpid());
		printf(" 1b) Mio padre ha pid: %d\n", getppid());
		int fork2 = fork();
		if (fork2 == 0)
		{
			
		}
		else
		{
			
		}
	}
	else
	{
		int fork4 = fork(); //fork 4
		printf("---------------------\n");
		printf(" 6a) Sono il processo padre ");
		printf(" 6b) Ho creato un processo con pid: %d\n", fork4);
		printf(" 6c) Il mio pid e' invece: %d\n", getpid());
		printf(" 6d) Ho creato un processo con pid: %d e sto per creare un secondo processo figlio\n", fork4);

		if (fork4 == 0)
		{
			printf("---------------------\n");
			printf(" 2a) Sono il priocesso figlio del figlio con pid: %d\n", getpid());
			printf(" 2b) Mio padre ha pid: %d\n", getppid());
		}
		sleep(1);
		exit(1);
	}
}