#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            a[i][j] = 0;

    a[0][((N + 1) / 2) - 1] = 1;

    int row = 1;
    int number = 2;
    int line = (N + 1) / 2;
    while (number <= N * N)
    {
        if (row == 1 && line != N)
        {
            row = N;
            line = line + 1;
            a[row - 1][line - 1] = number;
            number++;
        }
        else if (row != 1 && line == N)
        {
            line = 1;
            row = row - 1;
            a[row - 1][line - 1] = number;
            number++;
        }
        else if (row == 1 && line == N)
        {
            row = 2;
            line = N;
            a[row - 1][line - 1] = number;
            number++;
        }
        else if (row != 1 && line != N && a[row - 2][line] == 0)
        {
            row = row - 1;
            line = line + 1;
            a[row - 1][line - 1] = number;
            number++;
        }
        else
        {
            row = row + 1;
            line = line;
            a[row - 1][line - 1] = number;
            number++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j] << ' ';
            if (j == N - 1)
            {
                cout << endl;
            }
        }
    }

    return 0;
}