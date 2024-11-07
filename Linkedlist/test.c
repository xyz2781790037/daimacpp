#include "Slist.h"

void TestSlist1()
{
    Sltnode *plist = NULL;
    SlistPushBack(plist, 1);
    SlistPushBack(plist, 2);
    SlistPushBack(plist, 3);
    SlistPushBack(plist, 4);

    SlistPrint(plist);
}