#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[3];
    char A[4];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 3);
    cin >> A;
    for (int i = 0; i < 3; i++)
    {
        if (A[i] == 'A')
        {
            cout << a[0];
        }
        else if (A[i] == 'B')
        {
            cout << a[1];
        }
        else if (A[i] == 'C')
        {
            cout << a[2];
        }
        if (i < 2)
        {
            cout << ' ';
        }
    }
    return 0;
}