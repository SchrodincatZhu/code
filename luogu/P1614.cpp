#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int number = 0;
    int number1 = 0;
    for (int i = 0; i < m; i++)
    {
        number = number + a[i];
    }
    for (int i = 0; i < n - m + 1; i++)
    {
        for (int j = i; j < i + m; j++)
        {
            number1 = number1 + a[j];
        }
        if (number < number1)
        {
            number1 = 0;
        }
        else
        {
            number = number1;
            number1 = 0;
        }
    }
    cout << number;
    return 0;
}