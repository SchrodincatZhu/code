#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int x;
    while (cin >> x && x != 0)
    {
        v.push_back(x);
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
        if (i > 0)
        {
            cout << ' ';
        }
    }
    return 0;
}