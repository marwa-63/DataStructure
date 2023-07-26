#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "global.h"
#include "Stack.h"
#include "Queue.h"

void Display(void *pe)
{
    printf("%d\n",*(int*)pe);
}
int main()
{
   Stack s;
   CreateStack(&s);
   int x;
   printf("Enter Stack Elements:\n");
   int t=6;
   while(t--)
   {
       scanf("%d",&x);
        if(!StackFull(&s))
        Push(&x,&s,sizeof(x));
   }
   printf("--------------------------------------------------\n");
   printf("Stack Elements:\n");
   TraverseStack(&s,&Display);
   printf("Stack Size:%d\n",StackSize(&s));
   StackTop(&x,&s,sizeof(x));
   printf("Stack Top:%d\n",x);
   Queue q;
   CreateQueue(&q);
   int y;
    printf("--------------------------------------------------\n");
   printf("Enter Queue Elements:\n");
   int v=6;
   while(v--)
   {
       scanf("%d",&y);
       if(!QueueFull(&q))
       Append(&y,&q,sizeof(y));
   }
   printf("--------------------------------------------------\n");
   printf("Queue Elements:\n");
   TraverseStack(&q,&Display);
   printf("Queue Size:%d",QueueSize(&q));




    return 0;
}
