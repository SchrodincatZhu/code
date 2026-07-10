#include <iostream>
using namespace std;
int main()
{
    int X, C;
    cin >> X >> C;
    int last = X;
    int money = 0;
    while (last >= 1000 + C)
    {
        money += 1000;
        last = last - 1000 - C;
    }
    cout << money;

    return 0;
}