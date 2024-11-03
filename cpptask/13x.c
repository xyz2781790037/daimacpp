// 8.编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。获得用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的操作。该程序只接受菜单提供的选项。程序使用float类型的变量储存用户输入的数字，如果用户输入失败，则允许再次输入。进行除法运算时，如果用户输入0作为第2个数（除数），程序应提示用户重新输入一个新值。该程序的一个运行示例如下：
// Enter　the　operation　of　your　choice:
// a.　add　　　　　　　　s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// a
// Enter　first　number:　22.4
// Enter　second　number:　one
// one　is　not　an　number.
// Please　enter　a　number,　such　as　2.5,　-1.78E8,　or　3:　1
// 22.4　+　1　=　23.4
// Enter　the　operation
// of　your　choice:
// a.　add　　　　　　　　s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// d
// Enter　first　number:　18.4
// Enter　second　number:　
// 0
// Enter　a　number　other　than　0:　0.2
// 18.4　/　0.2　=　92
// Enter　the　operation　of　your　choice:
// a.　add　　　　　　　　s.　subtract
// m.　multiply　　　　 d.　divide
// q.　quit
// q
// Bye.
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the operation of your choice:\na. add s. subtract\nm. multiply d. divide \nq. quit\n");
    char alt;
    char num1[100], num2[100];
    int num3, num4;
    scanf("%c", &alt);
    if (alt == 'q')
    {
        printf("Bye.");
        return 0;
    }
    while (alt != 'a' && alt != 's' && alt != 'm' && alt != 'd' && alt != 'q')
    {
        scanf("%c", &alt);
    }
    scanf("%s %s", &num1, &num2);
    for (int i = 0; i < strlen(num1); i++)
    {
        if (num1[0] == '-')
        {
            continue;
        }
        if (num1[i] <= '0' || num1[i] >= '9')
        {
            printf("Enter again: ");
            scanf("%s", &num1);
            i = 0;
        }
    }
    for (int i = 0; i < strlen(num2); i++)
    {
        if(num2[0] == '-')
        {
            continue;
        }
        if (num2[i] <= '0' || num2[i] >= '9')
        {
            printf("Enter again: ");
            scanf("%s", &num2);
            i = 0;
        }
    }
    sscanf(num1, "%d", &num3);
    sscanf(num2, "%d", &num4);
    if (alt == 'a')
    {
        printf("%d", num3 + num4);
    }
    if (alt == 's')
    {
        printf("%d", num3 - num4);
    }
    if (alt == 'm')
    {
        printf("%d", num3 * num4);
    }
    if (alt == 'd')
    {
        while (num4 == 0)
        {
            printf("Enter again: ");
            scanf("%d", &num4);
        }
        printf("%d", num3 / num4);
    }
    return 0;
}