#include <stdio.h>
#include <sys/types.h>
#define MAX_COUNT 5

void ChildProcess(void);
void ParentProcess(void);

void main(void)
{
    Pid_y pid;
    pid = fork();
    if (pid == 0)
        ChildProcess();
    else
        ParentProcess();
}
void ChildProcess(void)
{
    int i;
    for (i = 1; i <= MAX_COUNT; i++)
    {
        printf("This line is form child, value = %d\n", i);
        printf("*** Child Process Done ***"\n);
    }
}

void ParentProcess(void)
{
    int i;
    for (i = 1; i < MAX_COUNT; i++)
    {

        printf("This line is form parent, value = %d\n", i);
        printf("*** Parent Process Done ***"\n);
    }
}