#include "queue.h"
void QueueInit(Queue *pq)
{
    assert(pq);
    pq->head = NULL;
    pq->tail = NULL;
}
void QueueDestroy(Queue *pq)
{
    assert(pq);
    QNode *cur = pq->head;
    while(cur != NULL)
    {
        QNode *next = cur->next;
        free(cur);
        cur = next;
    }
    pq->head = pq->tail = NULL;
}
void QueuePush(Queue *pq, qdatatype x)
{
    assert(pq);
    QNode *newnode = (QNode *)malloc(sizeof(QNode));
    newnode->data = x;
    newnode->next = NULL;
    if (pq->head == NULL)
    {
        pq->head = pq->tail = newnode;
    }
    else
    {
        pq->tail->next = newnode;
        pq->tail = newnode;
    }
}
void QueuePop(Queue *pq)
{
    assert(pq);
    assert(!QueueEmpty(pq));
    QNode *next = pq->head->next;
    free(pq->head);
    pq->head = next;
    if(pq->head == NULL)
    {
        pq->tail == NULL;
    }
}
qdatatype QueueFront(Queue *pq)
{
    assert(pq);
    assert(!QueueEmpty(pq));
    return pq->head->data;
}
qdatatype QueueBack(Queue *pq)
{
    assert(pq);
    assert(!QueueEmpty(pq));
    return pq->tail->data;
}
int QueueSize(Queue *pq);
bool QueueEmpty(Queue *pq)
{
    assert(pq);
    return pq->head == NULL;
}