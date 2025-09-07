#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        swap(a, b);
    }
    if (a > c)
    {
        swap(a, c);
    }
    if (b > c)
    {
        swap(b, c);
    }
    int A = a * a;
    int B = b * b;
    int C = c * c;
    if (a + b <= c)
    {
        cout << "Not triangle" << endl;
        return 0;
    }
    if (A + B == C)
    {
        cout << "Right triangle" << endl;
    }
    else if (A + B > C)
    {
        cout << "Acute triangle" << endl;
    }
    else if (A + B < C)
    {
        cout << "Obtuse triangle" << endl;
    }

    if ((a == b) || (b == c) || (a == c))
    {
        cout << "Isosceles triangle" << endl;
    }
    if (a == b && b == c)
    {
        cout << "Equilateral triangle";
    }

    return 0;
}