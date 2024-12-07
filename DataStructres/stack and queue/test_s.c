#include "stack.h"
void TestStack()
{
    ST st;
    StackInit(&st);
    StackPush(&st, 1);
    StackPush(&st, 2);
    StackPush(&st, 3);
    StackPush(&st, 4);
    //StackPrint(&st);
    StackPop(&st);
    StackPop(&st);
    StackPop(&st);
    StackPop(&st);
    printf("%d", StackTop(&st));
}
void TestStack2()
{
    ST st;
    StackInit(&st);
    StackPush(&st, 1);
    StackPush(&st, 2);
    StackPush(&st, 3);
    StackPush(&st, 4);

    printf("%d ", StackTop(&st));
    StackPop(&st);
    printf("%d ", StackTop(&st));
    StackPop(&st);
    StackPush(&st, 5);
    StackPush(&st, 6);
    while (!StackEmpty(&st))
    {
        printf("%d ", StackTop(&st));
        StackPop(&st);
    }
}
    int main()
    {
        TestStack2();
        return 0;
    }