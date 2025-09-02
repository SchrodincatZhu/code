#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int Local, Luogu;
    Local = 5 * t;
    Luogu = 11 + 3 * t;
    if (Local < Luogu)
    {
        cout << "Local";
    }
    else
    {
        cout << "Luogu";
    }

    return 0;
}