#include "Slist.h"

void SlistPrint(Sltnode *phead)
{
    Sltnode *cur = phead;
    while (cur != NULL)
    {
        printf("%d->", cur->data);
        cur = cur->next; // next是存储下一个data的地址的指针
    }
}
void SlistPushBack(Sltnode *phead, Sldatatype x)
{
    Sltnode *newnode = (Sltnode *)malloc(sizeof(Sltnode));
    newnode->data = x;
    newnode->next = NULL;

    if (phead = NULL)
    {
        phead = newnode;
    }
    else
    {
        Sltnode *tail = phead;
        // 找到尾节点
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        Sltnode *newnode = (Sltnode *)malloc(sizeof(Sltnode)); // newnode是原最后一个节点，现在开辟内存；
        newnode->data = x;
        newnode->next = NULL;

        tail->next = newnode; // newnode->text是最后一个地址，NULL；
    }
}