#include <iostream>
#include <string>
using namespace std;
int main()
{

    int n;
    string s;
    cin >> n >> s;

    if (s.size() > n)
    {
        s = s.substr(0, n);
    }

    int a[5][4 * n - 1];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 * n - 1; j++)
        {
            a[i][j] = 0;
        }
    }
    int line = 0;
    int row = 0;
    int shuzi = 0;
    while (line <= 4 * n - 1 && shuzi <= n)
    {
        if (s[shuzi] == '0')
        {
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '1')
        {
            line += 2;
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '2')
        {
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '3')
        {
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '4')
        {
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            line++;
            a[row + 2][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '5')
        {
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '6')
        {
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '7')
        {
            a[row][line] = 1;
            line++;
            a[row][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '8')
        {
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
        if (s[shuzi] == '9')
        {
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 2][line] = 1;
            a[row + 4][line] = 1;
            line++;
            a[row][line] = 1;
            a[row + 1][line] = 1;
            a[row + 2][line] = 1;
            a[row + 3][line] = 1;
            a[row + 4][line] = 1;
            line += 2;
            shuzi++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 * n - 1; j++)
        {
            if (a[i][j] == 0)
            {
                cout << '.';
            }
            if (a[i][j] == 1)
            {
                cout << 'X';
            }
            if (j == 4 * n - 2)
            {
                cout << endl;
            }
        }
    }

    return 0;
}