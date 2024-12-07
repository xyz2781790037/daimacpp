#include "queue.h"
void TestQueue()
{
    Queue q;
    QueueInit(&q);
    QueuePush(&q, 1);
    QueuePush(&q, 2);
    QueuePush(&q, 3);
    QueuePush(&q, 4);

    QueuePop(&q);
    QueuePop(&q);
    QueuePop(&q);
    QueuePop(&q);
    QueuePush(&q, 10);
    QueuePush(&q, 20);

    printf("%d\n", QueueBack(&q));
    QueueDestroy(&q);
}
int main()
{
    int a;
    
    return 0;
}