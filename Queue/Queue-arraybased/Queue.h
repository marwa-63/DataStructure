#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define QueueEntry int
#define MaxQueue 100
typedef struct queue{
    int frontt;
    int rear;
    int sizee;
    QueueEntry entry[MaxQueue];

}Queue;

void CreateQueue(Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
void Append(QueueEntry e,Queue *pq);
void Serve(QueueEntry *pe,Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq) ;
void TraverseQueue(Queue *pq,void (*pf) (QueueEntry));


#endif // QUEUE_H_INCLUDED
