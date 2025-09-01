#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float p = 0.5 * (a + b + c);
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f", S);
    return 0;
}