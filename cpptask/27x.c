// 7.编写一个程序打开两个文件。可以使用命令行参数或提示用户输入文件名。
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file1, *file2;
    char filename1[100], filename2[100];

    // 使用命令行参数作为文件名
    if (argc > 1)
    {
        strcpy(filename1, argv[1]);
        strcpy(filename2, argv[2]);
    }
    else
    {
        printf("请输入第一个文件名：");
        scanf("%s", filename1);
        printf("请输入第二个文件名：");
        scanf("%s", filename2);
    }
    file1 = fopen(filename1, "r");
    if (file1 == NULL)
    {
        printf("无法打开文件 %s\n", filename1);
        exit(1);
    }
    file2 = fopen(filename2, "r");
    if (file2 == NULL)
    {
        printf("无法打开文件 %s\n", filename2);
        exit(1);
    }
    fclose(file1);
    fclose(file2);

    return 0;
}