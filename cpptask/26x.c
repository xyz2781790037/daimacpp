// 8.下面是程序的一部分：
// 提供make_array() 和show_array() 函数的定义，完成该程序。make_array() 函数接受两个参数，第1个参数是int类型数组的元素个数，第2个参数是要赋给每个元素的值。该函数调用malloc() 创建一个大小合适的数组，将其每个元素设置为指定的值，并返回一个指向该数组的指针。show_array() 函数显示数组的内容，一行显示8个数
#include <stdio.h>
#include <stdlib.h>
int *make_array(int elem, int val)
{
    int *pa = (int *)malloc(elem * sizeof(int));
    if(pa == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < elem;i++)
    {
        pa[i] = val;
    }
    return pa;
}
void show_array(const int arr[], int n)
{
    for (int i = 0; i < n;i++)
    {
        printf("%d ", arr[i]);
        if((i+ 1) % 8 == 0)
        {
            printf("\n");
        }
    }
}
int main()
{
    int *pa;
    int size;
    int value;
    printf("Enter the number of elements:");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }
    printf("Done.\n");
    return 0;
}