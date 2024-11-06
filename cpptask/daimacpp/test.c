#include "Seqlist.h"
 
void TestSeqlist1()
{
    sl Sl;
    SeqlistInit(&Sl);
    SeqlistPushBack(&Sl, 1);
    SeqlistPushBack(&Sl, 2);
    SeqlistPushBack(&Sl, 3);
    SeqlistPushBack(&Sl, 4);
    SeqlistPushBack(&Sl, 5);
    ceshi(&Sl);
    SeqlistDestory(&Sl);
}
int main()
{
    TestSeqlist1();
    return 0;
}