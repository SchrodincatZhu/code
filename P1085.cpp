#include <iostream>
using namespace std;
int main()
{
    int a[7];
    int b[7];
    int sum[7];
    int number;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i] >> b[i];
        sum[i] = a[i] + b[i];
    }
    int max = sum[0];
    for (int i = 1; i < 7; i++)
    {
        if (max < sum[i])
        {
            max = sum[i];
            number = i + 1;
        }
    }
    cout << number;

    return 0;
}