#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int pid1;
    int pid2;
    int pid3;

    pid1 = fork();
    pid2 = fork();
    pid3 = fork();

    if ((pid1 == 0) || (pid2 == 0) (pid3 == 0))
    {
        printf("Sono il processo figlio con pid:%d. ", getpid());
        printf("Il mio papi ha il pid: %d\n.", getppid());
        sleep(1);
        exit(1);
    }
    else
    {
        sleep(2);
        printf("Sono il processo padre con ppid:%d\n.", getppid()),

    }
    return 0;
}