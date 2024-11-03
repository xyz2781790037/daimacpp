// 6.编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个函数，中间值放入第2个变量，最大值放入第3个变量。
#include <stdio.h>
void sort(double *a, double *b, double *c)
{
    double s = *a + *b + *c;
    double x = *b > *c ? *b : *c;
    double d = (*a > x ? *a : x);
    double x1 = *b < *c ? *b : *c;
    double e = (*a < x1 ? *a : x1);
    *b = s - d - e;
    *a = e;
    *c = d;
}
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    sort(&a, &b, &c);
    printf("%.6g %.6g %.6g",a, b, c);
    return 0;
}