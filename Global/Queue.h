#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "global.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define LinkedBased
#ifdef  LinkedBased

typedef struct queuenode {
    void* entry;
    struct queuenode *next;
}QueueNode;

typedef struct queue{
    QueueNode *front;
    QueueNode *rear;
    int size;
}Queue;

#else

typedef struct queue{
    int front;
    int rear;
    int size;
    void *entry[MaxQueue];

}Queue;
#endif // Limited_Memory

void CreateQueue(Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
void Append(void *pe,Queue *pq,int z);
void Serve(void *pe,Queue *pq,int z);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq) ;
void TraverseQueue(Queue *pq,void (*pf) (void *));


#endif // QUEUE_H_INCLUDED
