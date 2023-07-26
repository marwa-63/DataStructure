#include "Evaluate.h"
int IsDigit(char c)
{
    return (c>='0' && c<='9');
}
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

             Push(x,&s );
         }
         else
         {
             Pop(&op2,&s);
             Pop(&op1,&s);
             val=Oper(c,op1,op2);
             Push(val,&s);

         }
     }
     Pop(&val,&s);
       printf("in func %f\n",val);

     return val;
 }
