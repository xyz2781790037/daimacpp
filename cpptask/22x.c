// 15.使用字符分类函数实现atoi()函数。如果输入的字符串不是纯数字，该函数返回0。
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int my_atoi(char *a, int len)
{
    int flag = 1;
    int n = 0;
    while (isspace(*a))
    {
        a++, n++;
    }
    if (*a == '-')
    {
        flag = -1;
        a++, n++;
    }
    else if (*a == '+')
    {
        a++, n++;
    }
    long long count = 0;
    while (n < len - 1)
    {

        if (isdigit(*a))
        {
            count = count * 10 + (*a - '0');
        }
        else
        {
            return 0;
        }
        a++, n++;
    }
    count *= (long long)flag;
    return (int)count;
}
int main()
{
    char a[15];
    int len = 0;
    fgets(a, 15, stdin);
    while (a[len] != '\0')
    {
        len++;
    }
    int num = my_atoi(a, len);
    printf("%d", num);
    return 0;
}