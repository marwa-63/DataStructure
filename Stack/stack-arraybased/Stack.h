#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

 #define StackEntry int
 #define MaxStack 100



typedef struct stack{
    int top;
    StackEntry entry[MaxStack];

}Stack;

void CreateStack(Stack*);
int StackFull(Stack *ps);
void Push(StackEntry e , Stack *ps);
void Pop(StackEntry *pe , Stack *ps);
int StackEmpty(Stack *ps);
void StackTop(StackEntry *pe,Stack *ps);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps,void (*pf) (StackEntry));



#endif // STACK_H_INCLUDED
