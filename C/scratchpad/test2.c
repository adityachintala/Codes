#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    int res, n;
    char buffer[100];
    res = open("fifo2", O_RDONLY);
    n = read(res, buffer, 100);
    printf("Reader process %d started\n", getpid());
    printf("Data received by receiver %d is: %s\n", getpid(), buffer);
}