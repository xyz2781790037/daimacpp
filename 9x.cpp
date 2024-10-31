//3.编写一个程序，读取整数直到用户输入 0。输入结束后，程序应报告用户输入的偶数（不包括 0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值。
#include<stdio.h>
int main()
{
    int odd, even, num, index = 0, index1 = 0, count = 0, count1 = 0;
    while (1)
    {
        scanf("%d", &num);
        if(num == 0)
            break;
        if (num % 2 == 0)
        {
            even += num;
            count++;
        }
        else
        {
            odd += num;
            count1++;
        }
    }
    printf("%lf\n", (double)even / count);
    printf("%d\n", count);
    printf("%lf\n", (double)odd / count1);
    printf("%d\n", count1);
    return 0;
}