#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v{n + 1};
    v.push_back(n);
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            n = n * 3 + 1;
            v.push_back(n);
        }
        else
        {
            n = n / 2;
            v.push_back(n);
        }
    }
    for (int i = v.size() - 1; i > 0; i--)
    {
        cout << v[i];
        if (i > 0)
        {
            cout << ' ';
        }
    }
    return 0;
}