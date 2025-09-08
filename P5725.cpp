#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (number < 10)
            {
                cout << 0 << number;
            }
            else
            {
                cout << number;
            }
            number++;
        }
        cout << endl;
    }
    cout << endl;

    int number1 = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (n - i) * 2; j++)
        {
            cout << ' ';
        }
        for (int k = 0; k < i; k++)
        {
            if (number1 < 10)
            {
                cout << 0 << number1;
            }
            else
            {
                cout << number1;
            }
            number1++;
        }
        cout << endl;
    }
    return 0;
}