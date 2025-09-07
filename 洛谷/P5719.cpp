#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a = 0;
    int c = 0;
    int sum = (1 + n) * n / 2;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            a += i;
            c++;
        }
    }
    int b = sum - a;
    double A = (double)a / c;
    double B = (double)b / (n - c);
    printf("%.1f %.1f", A, B);
    return 0;
}