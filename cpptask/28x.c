// 11.编写一个名为transform() 的函数，接受4个参数：内含double类型数据的源数组名、内含double类型数据的目标数组名、一个表示数组元素个数的int类型参数、函数名（或等价的函数指针）。transform() 函数应把指定函数应用于源数组中的每个元素，并把返回值储存在目标数组中。例如：
//     transform(source, target, 100, sin);
// 该声明会把target[0] 设置为sin(source[0])，等等，共有100个元素。在一个程序中调用transform() 4次，以测试该函数。分别使用math.h函数库中的两个函数以及自定义的两个函数作为参数。
#include <stdio.h>
#include <math.h>
double transform(double *source, double *target, int n, double (*p)(double))
{
    for (int i = 0; i < n; i++)
    {
        target[i] = p(source[i]);
    }
    return *target;
}
double add(double x)
{
    return x + 4;
}
int main()
{
    double source[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double target[10];
    transform(source, target, 10, add);
    for (int i = 0; i < 10; i++)
    {
        printf("%lf ", target[i]);
    }
    return 0;
}