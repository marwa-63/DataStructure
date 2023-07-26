#include "EvaluatePostfix.h"

double Oper(char c,double op1,double op2)
{
    switch(c){
        case'+': return(op1+op2);
        case'-': return(op1-op2);
        case'*': return(op1*op2);
        case'/': return(op1/op2);
        case'$': return(pow(op1,op2));
    }

}

double EvaluatePostfix(char expr[])
 {
     int i;
     char c;
     double op1,op2,val;
     Stack s;
     CreateStack(&s);
     for(i=0;expr[i] != '\0';i++)
     {
         c=expr[i];
         if(IsDigit(c))
         {
            double x=(double)(c-'0');

             Push(&x,&s,sizeof(double));
         }
         else
         {
             Pop(&op2,&s,sizeof(double));
             Pop(&op1,&s,sizeof(double));
             val=Oper(c,op1,op2);
             Push(&val,&s,sizeof(double));

         }
     }
     Pop(&val,&s,sizeof(double));

     return val;
 }

