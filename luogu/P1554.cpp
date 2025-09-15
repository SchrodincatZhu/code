#include <iostream>
using namespace std;
int main()
{
    int M, N;
    cin >> M >> N;
    int b[10]{0};
    for (int i = M; i <= N; i++)
    {
        int x = i;
        if (x == 0)
            b[0]++;
        while (x > 0)
        {
            b[x % 10]++;
            x /= 10;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << ' ';
    }
    return 0;
}
