#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int k, x, num, n1, n2, a1[30001], a2[30001], t[20001], w, sum;
int main()
{
    scanf("%d", &num);
    memset(a1, 127 / 3, sizeof(a1));
    memset(a2, 127 / 3, sizeof(a2));
    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &x);
        t[x]++; // 桶
    }
    for (int i = 1; i <= 20000; i++)
    {
        while (t[i]) // 通排序
        {
            t[i]--;
            a1[++n1] = i;
        }
    }
    int i = 1, j = 1;
    k = 1;
    while (k < num)
    {
        if (a1[i] < a2[j]) // 取最小值
        {
            w = a1[i];
            i++;
        }
        else
        {
            w = a2[j];
            j++;
        }
        if (a1[i] < a2[j]) // 取第二次
        {
            w += a1[i];
            i++;
        }
        else
        {
            w += a2[j];
            j++;
        }
        a2[++n2] = w; // 加入第二个队列
        k++;          // 计算合并次数
        sum += w;     // 计算价值
    }
    printf("%d", sum);
}