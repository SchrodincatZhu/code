#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 3);
    int A = a[2];
    int B = a[0];
    int C = A % B;
    while (C != 0)
    {

        C = A % B;
        A = B;
        if (C != 0)
        {
            B = C;
        }
        else
        {
            break;
        }
    }
    cout << a[0] / B << '/' << a[2] / B;
    return 0;
}