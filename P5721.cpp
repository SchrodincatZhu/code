#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            if (a < 10)
            {
                cout << 0 << a;
                a++;
            }
            else
            {
                cout << a;
                a++;
            }
        }
        cout << endl;
    }

    return 0;
}