#include "execlp.h"

void compile()
{
    pid_t pid=fork();
    int k;
    if (pid==0)
    { /* child process */
    	k=execlp("gcc","gcc","f1.c","-o", "f1.out",NULL);
        exit(127); /* only if execlp fails */
    }
    else
    { /* pid!=0; parent process */
    	waitpid(pid,0,0); /* wait for child to exit */
    	printf("parent process\n");
    }
}