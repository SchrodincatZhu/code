#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    if (b != 8)
    {
        s[2] = b + 1 + '0';
    }
    else
    {
        s[0] = a + 1 + '0';
        s[2] = 1 + '0';
    }
    cout << s;

    return 0;
}