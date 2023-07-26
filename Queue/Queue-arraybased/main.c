#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
void display(QueueEntry e)
{
    printf("%d \n",e);
}
int main()
{
    printf("Hello world!\n");

    Queue q;
    CreateQueue(&q);
    QueueEntry e=8;
    Append(e,&q);
    e=10;
    Append(e,&q);
    TraverseQueue(&q,&display);
    return 0;
}
