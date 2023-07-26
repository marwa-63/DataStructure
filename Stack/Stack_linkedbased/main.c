#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

void Display(StackEntry e)
{
    printf("%d \n",e);
}
int main()
{
    printf("Hello world!\n");
    Stack s;
    CreateStack(&s);
    StackEntry e=5;


    Push(e,&s);
    e =9;
    Push(e,&s);
    TraverseStack(&s,&Display);
    return 0;
}
