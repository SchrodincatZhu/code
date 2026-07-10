#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number[n];
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = 1;
    }
    for (int i = 0; i < n; i++)
    { // 读入n个整数
        cin >> number[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (number[i] - number[i - 1] == 1)
        {
            sum[i] = sum[i - 1] + 1;
        }
        else
        {
            sum[i] = 1;
        }
    }
    sort(sum, sum + n, greater<int>());
    cout << sum[0];

    return 0;
}