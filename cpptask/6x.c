// 5.编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
// 打印这样的图形，要根据打印这样的图形，要根据用户输入的字母来决定。例如，上面的图形是在用户输入E后的打印结果。提示：用外层循环处理行，每行使用3个内层循环，分别处理空格、以升序打印字母、以降序打印字母。如果系统不使用ASCII或其他以数字顺序编码的代码，请参照练习3的解决方案。
#include <stdio.h>
int main()
{
    char alt, alt2 = '0';
    scanf("%c", &alt);
    for (int i = 0; i <= (alt - 'A'); i++)
    {
        for (int q = alt - 'A' - i; q > 0; q--)
        {
            printf(" ");
        }
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            printf("%c", j);
            alt2 = 'A' + i;
        }
        for (char k = alt2 - 1; k >= 'A'; k--)
        {
            printf("%c", k);
        }
        printf("\n");
    }
    return 0;
}