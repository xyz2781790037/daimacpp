// 11.编写并测试Fibonacci() 函数，该函数用循环代替递归计算斐波那契数。
#include <stdio.h>
unsigned long long Fibonacci(int n, unsigned long long first, unsigned long long second)
{
    unsigned long long next = 0;
    for (int i; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}
int main()
{
    int i = 1;
    int i1 = 1;
    int n;
    scanf("%d", &n);
    unsigned long long win = Fibonacci(n - 2, i, i1);
    printf("%llu", win);
    return 0;
}