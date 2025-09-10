#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N], b[N], c[N], d[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        d[i] = a[i] + b[i] + c[i];
    }
    int number = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (abs(d[i] - d[j]) <= 10 && abs(a[i] - a[j]) <= 5 && abs(b[i] - b[j]) <= 5 && abs(c[i] - c[j]) <= 5)
            {
                number++;
            }
        }
    }
    cout << number;
    return 0;
}