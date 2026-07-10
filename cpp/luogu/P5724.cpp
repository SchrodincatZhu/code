#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {

        cin >> s[i];
    }
    sort(s, s + n);
    int b = s[n - 1] - s[0];
    cout << b;
    return 0;
}
