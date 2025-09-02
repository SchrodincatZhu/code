#include <iostream>
using namespace std;
int main()
{
    int x;
    bool even = 0;
    bool rule = 0;
    cin >> x;
    if (x % 2 == 0)
    {
        even = 1;
    }
    if (4 < x && x <= 12)
    {
        rule = 1;
    }
    bool a = 0, b = 0, c = 0, d = 0;
    if (even && rule)
    {
        a = 1;
    }
    if (even || rule)
    {
        b = 1;
    }
    if ((even && !rule) || (!even && rule))
    {
        c = 1;
    }
    if (!even && !rule)
    {
        d = 1;
    }
    cout << a << ' ' << b << ' ' << c << ' ' << d;
    return 0;
}