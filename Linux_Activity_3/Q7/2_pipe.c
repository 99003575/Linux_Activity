#include<unistd.h>
#include<stdio.h> 
#include<fcntl.h>
#include<string.h> 
#include<stdlib.h> 
void main() 
{
    char string[256]="start"; 
    int fifo_wr,fifo_re; 
    while(strcmp(string,"end")!=0)   
    {   
        fifo_wr= open("pipes_1",O_WRONLY);   
        if(fifo_wr<0)     
            printf("\n can not open file");   
        else     
        {     
            printf("output ");     
            scanf("%s",string);     
            write(fifo_wr,string,255*sizeof(char));     
            close(fifo_wr);     
        }   
        fifo_re=open("pipes_2",O_RDONLY);   
        if(fifo_re<0)     
            printf("\ncan not open file ");   
        else     
        {     
            read(fifo_re,string,255*sizeof(char));     
            close(fifo_re);     
            printf("\n%s",string);     
        }   
    }
} 

