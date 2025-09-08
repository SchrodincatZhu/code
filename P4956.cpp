#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int X = 100; X > 0; X--)
    {
        int a = N - 364 * X;
        if (a <= 0)
        {
            continue;
        }
        if (a % 1092 == 0)
        {
            int b = a / 1092;
            if (b > 0)
            {
                cout << X << endl;
                cout << b << endl;
                break;
            }
        }
    }
    return 0;
}