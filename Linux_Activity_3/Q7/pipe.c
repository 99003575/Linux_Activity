#include<unistd.h>
#include<stdio.h> 
#include<fcntl.h>
#include<string.h> 
#include<stdlib.h> 
void main() 
{
    int f1;
    f1 = mkfifo("pipeA",0666);
    if(f1<0)
        printf("\nA pipe was not created");
    else
        printf("\nA pipe is created");
    int f2;
    f2 = mkfifo("pipeB",0666);
    if(f2<0)
        printf("\nB pipe was not created");
    else
        printf("\nB pipe is created\n");
}
