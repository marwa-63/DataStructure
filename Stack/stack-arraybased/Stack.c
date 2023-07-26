#include "Stack.h"
void CreateStack(Stack *ps)
{
    ps->top=0;
}
int StackFull(Stack *ps)
{
    return ps->top >= MaxStack;
}
void Push(StackEntry e , Stack *ps)
{
    ps->entry[ps->top]=e;
    ps->top++;
}
void Pop(StackEntry *pe , Stack *ps)
{
    *pe=ps->entry[--ps->top];
}

int StackEmpty(Stack *ps)
{
    return !ps->top;
}

void StackTop(StackEntry *pe,Stack *ps)
{
    *pe=ps->entry[ps->top -1];
}

int StackSize(Stack *ps)
{
    return ps->top;
}

void ClearStack(Stack *ps)
{
    ps->top=0;
}

void TraverseStack(Stack *ps,void (*pf) (StackEntry))
{
    for(int i=ps->top;i>0;i--)
    {
        (*pf)(ps->entry[i-1]);
    }
}
