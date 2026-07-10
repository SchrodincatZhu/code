#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int number[n]{0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                number[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << number[i] << ' ';
    }
    return 0;
}