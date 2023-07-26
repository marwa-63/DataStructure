#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define QueueEntry int
#define MaxQueue 100

typedef struct queuenode {
    QueueEntry entry;
    struct queuenode *next;
}QueueNode;

typedef struct queue{
    QueueNode *front;
    QueueNode *rear;
    int size;
}Queue;


#endif // QUEUE_H_INCLUDED
