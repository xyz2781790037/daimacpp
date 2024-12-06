#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int arr[10000], nums[5001];
int main()
{
    int n, sum = 0, mark = 0, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    flag = n;
    while (1)
    {
        mark = 0;
        for (int i = 0; i < flag - 1; i += 2)
        {
            sum += arr[i] + arr[i + 1];
            nums[mark++] = arr[i] + arr[i + 1];
        }
        if (flag % 2 != 0)
        {
            nums[mark++] = arr[flag - 1];
        }
        if (mark == 1)
        {
            break;
        }
        memset(arr, 0, 4 * flag);
        sort(nums, nums + mark);
        for (int j = 0; j < mark; j++)
        {
            arr[j] = nums[j];
        }
        flag = mark;
    }
    cout << sum;
    return 0;
}