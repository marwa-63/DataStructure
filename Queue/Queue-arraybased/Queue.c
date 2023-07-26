#include "Queue.h"
void CreateQueue(Queue *pq){
    pq->frontt=0;
    pq->rear=-1;
    pq->sizee=0;
}
int QueueEmpty(Queue *pq)
{
    return !pq->sizee;
}
int QueueFull(Queue *pq)
{
    return pq->sizee==MaxQueue;
}
void Append(QueueEntry e,Queue *pq)
{
    pq->rear=(pq->rear +1)%MaxQueue;
    pq->entry[pq->rear]=e;
    pq->sizee++;
}
void Serve(QueueEntry *pe,Queue *pq)
{
    *pe=pq->entry[pq->frontt];
    pq->frontt=(pq->frontt +1)%MaxQueue;
    pq->sizee--;
}
int QueueSize(Queue *pq){return pq->sizee;}

void ClearQueue(Queue *pq){
    pq->frontt=0;
    pq->rear=-1;
    pq->sizee=0;
}
void TraverseQueue(Queue *pq,void (*pf) (QueueEntry))
{
    int pos,s;
    for(pos=pq->frontt,s=0;s<pq->sizee;s++)
    {
        (*pf) (pq->entry[pos]);
         pos=(pos +1)%MaxQueue;
    }
}

