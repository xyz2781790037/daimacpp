#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int stdatatype;
typedef struct Stack
{
    stdatatype *a;
    int top;
    int capacity;
} ST;
void StackInit(ST *ps);
void StackDestroy(ST *ps);
void StackPush(ST *ps, stdatatype x);
void StackPop(ST *ps);
stdatatype StackTop(ST *ps);
int StackSize(ST *ps);
bool StackEmpty(ST *ps);
void StackPrint(ST *ps);