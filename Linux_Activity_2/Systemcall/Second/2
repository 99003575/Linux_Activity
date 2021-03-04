#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int ret = fork();
    switch (ret)
    {
        case 0:
            execlp("./new",NULL);
            /*for (int i = 0; i < 10; i++)
            {
                printf("Child\nPID = %d\tPPID = %d\n",getpid(),getppid());
                sleep(1);
            }*/
            break;
        case -1:
            perror("fork");
            exit(1);
            break;
        
        default:
            for (int i = 0; i < 10; i++)
            {
                printf("Parent\n");
                sleep(1);
            }
            break;
    }
    exit(0);
}
