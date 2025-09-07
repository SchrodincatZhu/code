#include <iostream>
using namespace std;
int main()
{
    double m, t, s;

    cin >> m >> t >> s;
    if (t == 0)
    {
        int w = 0;
        cout << w;
    }
    else
    {
        int w = m - s / t;
        if (w < 0)
        {
            w = 0;
        }
        cout << w;
    }

    return 0;
}