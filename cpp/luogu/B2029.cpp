#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h, r;
    cin >> h >> r;
    double w = (double)20000 / (3.14 * r * r * h);
    cout << ceil(w);

    return 0;
}