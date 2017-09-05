#include<stdio.h>
#include<math.h>
#include"C HEADER.h"

#define size_array 100
#define size_stack 100
#define TRUE 1
#define FALSE 0
#define NUMBER 'N'
#define CHARACTERS 'C'
#define VARIABLES 'V'
#define ENTER '\n'
//#define MATH_FUNC

#ifdef MATH_FUNC
#define MATH_FUNC 'M'
#endif
#ifdef MATH_FUNC
#define SIN 0
#define COS 1
#define LOG 3

#endif

void push(int item);
double pop();
double solve_characters(char c);
double atof(char *s);
_Bool is_splchar(char s);
_Bool evaluate(char string[]);
int input(char string[], int *i);

double stack[size_stack];
double store_func_var[size_array];