#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    int row = 0;
    int line = 0;
    a[row][line] = 1;
    int i = 2;
    while (i <= n * n)
    {
        while (line + 1 < n && a[row][line + 1] == 0)
        {
            line += 1;
            a[row][line] = i;
            i++;
        }
        while (row + 1 < n && a[row + 1][line] == 0)
        {
            row += 1;
            a[row][line] = i;
            i++;
        }
        while (line - 1 >= 0 && a[row][line - 1] == 0)
        {
            line -= 1;
            a[row][line] = i;
            i++;
        }
        while (row - 1 >= 0 && a[row - 1][line] == 0)
        {
            row -= 1;
            a[row][line] = i;
            i++;
        }
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            int num = a[j - 1][i - 1];

            if (num < 10)
            {
                cout << "  ";
            }
            else if (num < 100)
            {
                cout << ' ';
            }
            cout << num;
        }
        cout << '\n';
    }
    return 0;
}