#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n; // n次操作
    cin >> n;
    vector<int> t(n + 1);
    vector<double> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> t[i];
    }
    vector<int> light(2000000 + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= t[i]; j++)
        {
            int number = (int)floor(a[i] * j);
            light[number] ^= 1;
        }
    }
    for (int i = 1; i <= 2000000; i++)
    {
        if (light[i] == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}