// 6.编写一个程序，生成1000个1～10范围内的随机数。不用保存或打印这些数字，仅打印每个数出现的次数。用 10 个不同的种子值运行，生成的数字出现的次数是否相同？可以使用本章自定义的函数或ANSI C的rand()和srand()函数，它们的格式相同。这是一个测试特定随机数生成器随机性的方法。
#include <time.h>
#include <stdio.h>
int arr[11];
int main()
{
    srand(time(NULL));
    for (int i = 0; i < 1000; i++)
    {
        int a = rand() % 10 + 1;
        arr[a] += 1;
    }
    for (int i = 1; i < 11; i++)
    {
        printf("%d的个数为:%d\n", i, arr[i]);
    }
    return 0;
}