//8.编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为求模运算符的第2个运算对象，该数在运算过程中保持不变。用户后面输入的数是第1个运算对象。当用户输入一个非正值时，程序结束。其输出示例如下：
#include<stdio.h>
int main()
{
    int num1, num2, result = 0;
    scanf("%d", &num1);
    while(1)
    {
        scanf("%d",&num2);
        if(num2 <= 0)
            break;
        result = num2 % num1;
        printf("%d\n", result);
    }
    return 0;
}