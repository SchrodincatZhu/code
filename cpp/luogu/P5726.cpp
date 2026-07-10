#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        sum += a[i];
    }
    double b = 0;
    b = (double)sum / (n - 2);
    printf("%.2f", b);
    return 0;
}