#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "Stack.h"
#include "InfixToPostFix.h"
#include "EvaluatePostfix.h"






int main()
{
    char infix[100];//"1+3*4$5/6-7";
    char postfix[100];
    printf("Enter infix Expression:");
    scanf("%s",infix);
    InfixToPostFix(infix,postfix);
    printf("\t\t\t\t____________________________________________________\n");
    printf("Infix To PostFix: %s\n",postfix); getc;
   double x=EvaluatePostfix(postfix);
   printf("The value of the expression: %f\n",x); //getc;

    return 0;
}

