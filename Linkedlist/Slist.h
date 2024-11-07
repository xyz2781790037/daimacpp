#pragma once
#include <stdlib.h>
#include <stdio.h>
typedef int Sldatatype;
typedef struct SlistNode
{
    Sldatatype data;
    struct SlistNode *next;
} Sltnode;

void SlistPrint(Sltnode *phead);
void SlistPushBack(Sltnode *phead, Sldatatype x);