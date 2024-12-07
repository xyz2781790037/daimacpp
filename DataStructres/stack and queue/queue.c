#include "queue.h"
void QueueInit(Queue *pq)
{
    assert(pq);
    pq->head = NULL;
    pq->tail = NULL;
}
void QueueInit(Queue *pq);
void QueueDestroy(Queue *pq);
void QueuePush(Queue *pq, qdatatype x);
void QueuePop(Queue *pq);
qdatatype QueueFront(Queue *pq);
qdatatype QueueBack(Queue *pq);
int QueueSize(Queue *pq);
bool QueueEmpty(Queue *pq);