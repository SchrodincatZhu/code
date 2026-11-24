#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<vector<int>> a(n);
    for (int j = 0; j < n; j++)
    {
        a[j].resize(j + 1, 1);
        for (int i = 1; i < j; i++)
        {
            a[j][i] = a[j - 1][i - 1] + a[j - 1][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j > 0)
            {
                cout << ' ';
            }
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}