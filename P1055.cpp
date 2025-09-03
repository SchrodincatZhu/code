#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int A = ((a[0] - '0') * 1 + (a[2] - '0') * 2 + (a[3] - '0') * 3 + (a[4] - '0') * 4 + (a[6] - '0') * 5 + (a[7] - '0') * 6 + (a[8] - '0') * 7 + (a[9] - '0') * 8 + (a[10] - '0') * 9) % 11;
    char B = (A == 10 ? 'X' : A + '0');
    if (a[12] == B)
    {
        cout << "Right";
    }
    else
    {
        a[12] = B;
        cout << a;
    }

    return 0;
}