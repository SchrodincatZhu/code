#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    if (n > 0)
    {
        string s = to_string(n);

        reverse(s.begin(), s.end());
        int i = 0;
        while (i < s.size() && s[i] == '0')
        {
            i++;
        }
        s = s.substr(i);
        cout << s;
        return 0;
    }
    if (n < 0)
    {
        string s = to_string(-n);

        reverse(s.begin(), s.end());
        int i = 0;
        while (i < s.size() && s[i] == '0')
        {
            i++;
        }
        s = s.substr(i);
        cout << '-' << s;
    }
    return 0;
}