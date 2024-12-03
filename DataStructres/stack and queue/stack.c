#include "stack.h"
void StackInit(ST *ps)
{
    assert(ps);
    ps->a = NULL;
    ps->capacity = ps->top = 0;
}
void StackDestroy(ST *ps)
{
    assert(ps);
    free(ps->a);
    ps->a = NULL;
    ps->top = ps->capacity = 0;
}
void StackPush(ST *ps, stdatatype x)
{
    if (ps->top == ps->capacity)
    {
        int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
        stdatatype *tmp = (stdatatype *)realloc(ps->a, sizeof(stdatatype) * newcapacity);
        if (tmp == NULL)
        {
            printf("error");
            exit(-1);
        }
        ps->a = tmp;
        ps->capacity = newcapacity;
    }
    ps->a[ps->top] = x;
    ps->top++;
}
void StackPop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);
    ps->top--;
}
stdatatype StackTop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);
    return ps->a[ps->top - 1];
}
int StackSize(ST *ps)
{
    assert(ps);
    return ps->top;
}
bool StackEmpty(ST *ps)
{
    assert(ps);
    return ps->top == 0;
}
void StackPrint(ST *ps)
{
    for (int i = 0; i < ps->top;i++)
    {
        printf("%d ", ps->a[i]);
    }
}