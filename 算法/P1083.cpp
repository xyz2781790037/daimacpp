#include <iostream>
using namespace std;
int arr[1000001], d[1000001];
int main()
{
    int n, m, amount, daystart, dayend;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            d[0] = arr[0];
        }
        else
        {
            d[i] = arr[i] - arr[i - 1];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> amount >> daystart >> dayend;
        d[daystart - 1] -= amount;
        if(dayend < n){
            d[dayend] -= amount;
        }
    }
    cout << "0" << endl;
    return 0;
}