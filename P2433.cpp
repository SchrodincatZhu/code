#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        cout << 14 / 4 << endl
             << 14 / 4 * 4 << endl
             << 14 % 4;
    }
    else if (T == 4)
    {
        double a = 500.0 / 3;
        printf("%.3f", a);
    }
    else if (T == 5)
    {
        cout << 480 / 32;
    }
    else if (T == 6)
    {
        cout << sqrt(36 + 81);
    }
    else if (T == 7)
    {
        cout << 110 << endl
             << 90 << endl
             << 0 << endl;
    }
    else if (T == 8)
    {
        cout << 3.141593 * 2 * 5 << endl
             << 3.141593 * (25) << endl
             << (4.0 / 3) * 3.141593 * (125);
    }
    else if (T == 9)
    {
        cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2;
    }
    else if (T == 10)
    {
        cout << 9 << endl;
    }
    else if (T == 11)
    {
        cout << (double)(100.0 / 3);
    }
    else if (T == 12)
    {
        cout << 'M' - 'A' + 1 << endl
             << (char)('A' + 17);
    }
    else if (T == 13)
    {
        cout << (int)pow((3.141593 * 4 / 3) * 1064, 1.0 / 3);
    }
    else if (T == 14)
    {
        cout << 50 << endl;
    }
    return 0;
}
