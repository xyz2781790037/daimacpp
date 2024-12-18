#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int qdatatype;
typedef struct QueueNode
{
    struct QueueNode *next;
    qdatatype data;
}QNode;
typedef struct Queue
{
    QNode *head;
    QNode *tail;
}Queue;

void QueueInit(Queue *pq);
void QueueDestroy(Queue *pq);
void QueuePush(Queue *pq, qdatatype x);
void QueuePop(Queue *pq);
qdatatype QueueFront(Queue *pq);
qdatatype QueueBack(Queue *pq);
int QueueSize(Queue *pq);
bool QueueEmpty(Queue *pq);