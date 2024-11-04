//8.使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3～第5个元素拷贝至内含3个元素的数组中。该函数本身不需要修改，只需要选择合适的实际参数（实际参数不需要是数组名和数组大小，只需要是数组元素的地址和待处理元素的个数）。
#include<stdio.h>
void coarr(int *arr,int *s,int len)
{
    for (int i = len; i < len + 3;i++)
    {
        *(s + i) = *(arr + i - 1);
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int s[6] = {0, 8, 9};
    coarr(arr, s, 3);
    printf("%d", s[3]);
    return 0;
}