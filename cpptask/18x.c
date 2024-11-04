// 7.编写一个程序，初始化一个double类型的二维数组，使用编程练习2中的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中（因为二维数组是数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）。
#include <stdio.h>

void cparr(double (*arr)[3], int len, double (*s)[3])
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            s[i][j] = arr[i][j];
        }
    }
}
int main()
{
    double arr[3][3] = {{2.1, 3.4, 5.6}, {1.2, 2.2, 3.7}, {5.7, 7.8, 8.9}};
    double s[3][3];
    cparr(arr, 3, s);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.6g\n",s[i][j]);
        }
    }
    return 0;
}