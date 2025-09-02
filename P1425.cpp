#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d >= b)
    {
        int e = c - a;
        int f = d - b;
        cout << e << ' ' << f;
    }
    else
    {
        int e = c - a - 1;
        int f = d - b + 60;
        cout << e << ' ' << f;
    }

    return 0;
}