// 13.编写一个程序，反序显示命令行参数的单词。例如，命令行参数是 see you later，该程序应打印later you see。
//  #include<stdio.h>
//  int main(int argc,char *argv[])
//  {
//      for (int i = argc - 1; i > 0;i--)
//      {
//          printf("%s ", argv[i]);
//      }
//          return 0;
//  }
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // 从命令行参数获取单词数量
    int i;

    // 如果没有参数，输出提示信息
    if (argc < 2)
    {
        printf("请提供一些单词作为命令行参数。\n");
        
    }
    for (i = argc - 1; i > 0; i--)
    {
        printf("%s", argv[i]);
        if (i > 1)
        {
            printf(" "); // 在单词之间添加空格
        }
    }

    printf("\n"); // 最后换行
    return 0;
}