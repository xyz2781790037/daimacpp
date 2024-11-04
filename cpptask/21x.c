// 14.编写一个通过命令行运行的程序计算幂。第1个命令行参数是double类型的数，作为幂的底数，第2个参数是整数，作为幂的指数。
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        return 1;
    }

    double a = 0;
    int b = 0;
    a = atof(argv[1]);
    b = atoi(argv[2]);
    printf("%.1lf ", a);
    printf("%d ", b);
    printf("%.6lf", pow(a, b));
    return 0;
}