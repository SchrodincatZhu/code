#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    double S = 0.0;
    int number = 1;

    while (S <= k)
    {
        S = S + 1.0 / number;
        number++;
    }
    cout << number - 1;

    return 0;
}