// 4.编写一个程序，接受两个int类型的参数：一个是值；一个是位的位置。如果指定位的位置为1，该函数返回1；否则返回0。在一个程序中测试该函数。
#include <stdio.h>
int tset(int x,int y)
{
    for (int i = 0; i < y - 1;i++)
    {
        x = x >> 1;
    }
    return x ^ 0;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", tset(x, y));
    return 0;
}