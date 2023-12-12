#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#define MAX_COUNT 5
int main(int argc, char *argv[])
{
    printf("My PID : %d\n", getpid());
    Sleep(5);
    kill(getpid(), SIGSEGV);
    return 0;
}