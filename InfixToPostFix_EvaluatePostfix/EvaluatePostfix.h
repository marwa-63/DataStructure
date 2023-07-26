#ifndef EVALUATEPOSTFIX_H_INCLUDED
#define EVALUATEPOSTFIX_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Stack.h"
#include "InfixToPostFix.h"
#include <math.h>

double Oper(char c,double op1,double op2);

double EvaluatePostfix(char expr[]);

double func(char expr[]);




#endif // EVALUATEPOSTFIX_H_INCLUDED
