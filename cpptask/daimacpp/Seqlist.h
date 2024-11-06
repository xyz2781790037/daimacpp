#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// #define N 100
// typedef int Sldatatype;
// typedef struct Seqlist // 静态顺序表
// {
//     Sldatatype a[N];
//     int size; // 表示储存了多少数据
// } sl, arr[1000];
// // 接口函数
// void SeqlistInit(sl *ps);
// void SeqlistPushBack(sl *ps, Sldatatype x);
// void SeqlistPopBack(sl *ps);
// void SeqlistPushFront(sl *ps, Sldatatype x);
// void SeqlistPopFront(sl *ps);

typedef int Sldatatype;
typedef struct Seqlist // 静态顺序表
{
    Sldatatype *a;
    int size;     // 表示储存了多少数据
    int capacity; // 实际存储数据的空间大小
} sl;
// 接口函数
void SeqlistInit(sl *ps);
void SeqlistPushBack(sl *ps, Sldatatype x);
void SeqlistPopBack(sl *ps);
void SeqlistPushFront(sl *ps, Sldatatype x);
void SeqlistPopFront(sl *ps);
void ceshi(sl *ps);
void SeqlistDestory(sl *ps);