#include "Stack.h"

void CreateStack(Stack *ps)
{
    ps->top=NULL;
    ps->size=0;
}

void Push(StackEntry e,Stack *ps)
{
    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
}

void Pop(StackEntry *pe ,Stack *ps)
{
    *pe=ps->top->entry;
    StackNode *pn;
    pn=ps->top;
    ps->top=ps->top->next;
    ps->size--;
    free(pn);
}
int StackFull(Stack *ps) {return 0;}

int StackEmpty(Stack *ps){ return ps->top==NULL; }

void ClearStack(Stack *ps)
{
    StackNode *pn=ps->top;
    while(pn){
        pn=pn->next;
        free(ps->top);
        ps->top=pn;
    }
}

void TraverseStack(Stack *ps,void (*pf) (StackEntry) )
{

    for(StackNode *pn=ps->top;pn;pn=pn->next)
        (*pf)(pn->entry);
}

int StackSize(Stack *ps) { return ps->size; }
