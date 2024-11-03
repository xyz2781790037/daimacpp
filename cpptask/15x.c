// 8.第6章的程序清单6.20中，power() 函数返回一个double类型数的正整数次幂。改进该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处理为1）。要使用一个循环，并在程序中测试该函数。
#include <stdio.h>
#include<math.h>
double power(double n, int p)
{
    double pow = 1;
    int i;
    if(n == 0 && p != 0)
    {
        return 0;
    }
    for (i = 1; i <= abs(p); i++)
    {
        printf("%d\n", p);
        if (p > 0)
        {
            pow *= n;
        }
        else if(p < 0)
        {
            pow *= (1 / n);
        }
        else
        {
            break;
        }
    }
    return pow;
} // ANSI函数原型
int main(void)
{
    double x, xpow;
    int exp;
    printf("Enter a number and the positive integer power");
    printf("to which\nthe number will be raised.Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}