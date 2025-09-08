#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i * i < n; i++)
    {

        if (n % i == 0)
        {
            int a = n / i;
            cout << a;
            break;
        }
    }

    return 0;
}