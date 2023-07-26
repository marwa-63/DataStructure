#include "Queue.h"
#include "global.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define LinkedBased
#ifdef LinkedBased

void CreateQueue(Queue *pq){
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}
int QueueEmpty(Queue *pq)
{
    return !pq->front;
}
int QueueFull(Queue *pq)
{
    return 0;
}
void Append(void *pe,Queue *pq,int z)
{
    QueueNode *pn=(QueueNode *)malloc(sizeof(QueueNode));
    void *ptr=malloc(z);
    memcpy(ptr,pe,z);
    pn->entry=ptr;
    pn->next=NULL;
    if(!pq->rear)
        pq->front=pn;
    else
        pq->rear->next=pn;
        pq->rear=pn;
    pq->size++;
}
void Serve(void *pe,Queue *pq,int z)
{
    void *ptr=malloc(z);
    ptr=pq->front->entry;
    memcpy(pe,ptr,z);
    QueueNode *pn=pq->front;
    pq->front=pn->next;
    free(pn);
    if(!pq->front)
        pq->rear=NULL;
    pq->size--;
}
int QueueSize(Queue *pq){return pq->size;}

void ClearQueue(Queue *pq){
    while(pq->front)
    {
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
 pq->size=0;
}
void TraverseQueue(Queue *pq,void (*pf) (void*))
{
    QueueNode *pn=pq->front;
    for( ;pn;pn=pn->next)
        (*pf)  ( pn->entry );
}



#else
void CreateQueue(Queue *pq){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
int QueueEmpty(Queue *pq)
{
    return !pq->size;
}
int QueueFull(Queue *pq)
{
    return pq->size==MaxQueue;
}
void Append(void *pe,Queue *pq,int z)
{
    pq->rear=(pq->rear +1)%MaxQueue;
    void *ptr=malloc(z);
    memcpy(ptr,pe,z);
    pq->entry[pq->rear]=ptr;
    pq->size++;
}
void Serve(void *pe,Queue *pq,int z)
{
    memcpy(pe,pq->entry[pq->front],z);
    pq->front=(pq->front +1)%MaxQueue;
    pq->size--;
}
int QueueSize(Queue *pq){return pq->size;}

void ClearQueue(Queue *pq){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
void TraverseQueue(Queue *pq,void (*pf) (void *))
{
    int pos,s;
    for(pos=pq->front,s=0;s<pq->size;s++)
    {
        (*pf) ((pq->entry[pos]));
         pos=(pos +1)%MaxQueue;
    }
}
#endif
