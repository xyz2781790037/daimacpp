#include <iostream>
using namespace std;
int main()
{
    int n, m, l, r;
    cin >> n;
    int *arr = (int *)malloc(4 * n);
    int *sum = (int *)malloc(4 * n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = arr[i] + sum[i - 1];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> l >> r;
        if(l - 2 < 0){
            cout << sum[r - 1] << endl;
        }
        else{
        cout << sum[r - 1] - sum[l - 2] << endl;
        }
    }
    free(arr), free(sum);
    return 0;
}