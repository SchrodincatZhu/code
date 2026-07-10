#include <iostream>
using namespace std;
int main()
{
    int x, n;
    int s = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        if (x != 6 && x != 7)
        {
            s += 250;
        }
        x++;
        if (x > 7)
        {
            x = 1;
        }
    }
    cout << s;
    return 0;
}