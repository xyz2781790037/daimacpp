#include "Seqlist.h"

void ceshi(sl *ps)
{
    for (int i = 0; i < ps->size; i++)
    {
        printf("%d ", ps->a[i]);
    }
}
void SeqlistDestory(sl *ps)
{
    free(ps->a);
    ps->a = NULL;
    ps->size = ps->capacity = 0;
}
void SeqlistInit(sl *ps)
{
    ps->a = NULL;
    ps->size = ps->capacity = 0;
}
void SeqlistPushBack(sl *ps, Sldatatype x)
{
    if (ps->size == ps->capacity)
    {
        int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
        Sldatatype *tmp = (Sldatatype *)realloc(ps->a, newcapacity * sizeof(Sldatatype));
        if (tmp == NULL)
        {
            printf("error");
            exit(-1);
        }
        ps->a = tmp;
        ps->capacity = newcapacity;
    }
    ps->a[ps->size] = x;
    ps->size++;
}
void SeqlistPopBack(sl *ps)
{
    //温柔方式
    if (ps->size > 0)
    {
        // ps->a[ps->size - 1] = 0;//万一它数据本身是0；
        ps->size--;
    }
    //暴力方式
    // assert(ps->size > 0);；VB
    // ps->size--;
}
void SeqlistPushFront(sl *ps, Sldatatype x);
void SeqlistPopFront(sl *ps);