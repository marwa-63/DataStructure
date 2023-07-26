#ifndef EVALUATE_H_INCLUDED
#define EVALUATE_H_INCLUDED

#include "Stack.h"
double Oper(char c,double op1,double op2);

double EvaluaPostfix(char expr[]);
int IsDigit(char c);



#endif // EVALUATE_H_INCLUDED
