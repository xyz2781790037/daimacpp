// 5.编写一个程序，生成100个1～10范围内的随机数，并以降序排列（可以把第11章的排序算法稍加改动，便可用于整数排序，这里仅对整数排序）。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int arr[100];
int main()
{
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}