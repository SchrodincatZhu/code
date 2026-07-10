#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double w;
    if (n <= 150)
    {
        w = 0.4463 * n;
    }
    else if (150 < n && n <= 400)
    {
        w = 0.4463 * 150 + (n - 150) * 0.4663;
    }
    else
    {
        w = 0.4463 * 150 + (400 - 150) * 0.4663 + (n - 400) * 0.5663;
    }
    printf("%.1f", w);
    return 0;
}