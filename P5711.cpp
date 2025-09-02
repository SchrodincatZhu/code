#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool y = 0;
    if (n % 4 == 0 && n % 100 != 0)
    {
        y = 1;
    }
    if (n % 100 == 0 && n % 400 == 0)
    {
        y = 1;
    }
    cout << y;

    return 0;
}