#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>

/*
This program provides a possible solution for producer-consumer problem using mutex and semaphore.
*/

#define MaxItems 3 // Maximum items a producer can produce or a consumer can consume
#define BufferSize 3 // Size of the buffer

sem_t empty;
sem_t full;
int in = 0;
int out = 0;
int item=0;
int buffer[BufferSize];

void *producer(void *pno)
{   
    if(in==BufferSize-1)
    {
        printf("Producer Stack is full \n");
    }
    else
    {
     for(int i = 0; i < MaxItems; i++) {
        item = rand(); // Produce a random item
        sem_wait(&empty);
        /* put value item into the buffer */
        buffer[in] = item;
        printf("Producer %d: Insert Item %d at %d\n", *((int *)pno),buffer[in],in);
        in = (in + 1) % BufferSize;     
        sem_post(&full);
     }
    }
}
void *consumer(void *cno)
{   
    if(out==BufferSize-1)
    {
        printf("Consumer Stack is full\n");
    }
    else
    {
     int item=0;
     for(int i = 0; i < MaxItems; i++) {
        sem_wait(&full);
        /* take one unit of data from the buffer */
        item = buffer[out];
        printf("Consumer %d: Remove Item %d from %d\n",*((int *)cno),item, out); 
        out = (out + 1) % BufferSize;     
        sem_post(&empty);
     }
    }
}

int main()
{   

    pthread_t pro[3],con[3];
    sem_init(&empty,0,BufferSize);
    sem_init(&full,0,0);

    int a[3] = {1,2,3}; //Just used for numbering the producer and consumer

    for(int i = 0; i < 3; i++) {
        pthread_create(&pro[i], NULL, (void *)producer, (void *)&a[i]);
    }
    for(int i = 0; i < 3; i++) {
        pthread_create(&con[i], NULL, (void *)consumer, (void *)&a[i]);
    }

    for(int i = 0; i < 3; i++) {
        pthread_join(pro[i], NULL);
    }
    for(int i = 0; i < 3; i++) {
        pthread_join(con[i], NULL);
    }

    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}
