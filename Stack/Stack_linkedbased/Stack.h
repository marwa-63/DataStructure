#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define StackEntry int
typedef struct stacknode{
 StackEntry entry;
 struct stacknode *next;
}StackNode;

typedef struct stack{
    StackNode *top;
    int size;
}Stack;

void CreateStack(Stack *ps);
void Push(StackEntry e,Stack *ps);
void Pop(StackEntry *pe ,Stack *ps);
int StackFull(Stack *ps);
int StackEmpty(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps,void (*pf) (StackEntry) );
int StackSize(Stack *ps);



#endif // STACK_H_INCLUDED
