//4.使用if else语句编写一个程序读取输入，读到 #停止。用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
#include<stdio.h>
int main()
{
    char ch;
    int count = 0;
    while (ch = getchar())
    {
        if(ch == '#')
        {
            break;
        }
        else if(ch == '.')
        {
            ch = '!';
            count++;
        }
        else if(ch == '!')
        {
            ch = '!!';
            count++;
        }
    }
    printf("%d", count);
    return 0;
}