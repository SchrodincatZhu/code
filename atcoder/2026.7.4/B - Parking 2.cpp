#include <iostream>
using namespace std;
int main()
{
    int X, Y, L, R, A, B;
    cin >> X >> Y >> L >> R >> A >> B;
    int fee = 0;
    if (L <= A)
    {
        if (R >= B)
        {
            fee = (B - A) * X;
        }
        if (B > R)
        {
            fee = (R - A) * X + (B - R) * Y;
        }
    }
    if (L > A)
    {
        if (R >= B)
        {
            fee = (L - A) * Y + (B - L) * X;
        }
        if (R < B)
        {
            fee = (L - A) * Y + (B - R) * Y + (R - L) * X;
        }
    }
    if (A >= R || B <= L)
    {
        fee = (B - A) * Y;
    }
    cout << fee << endl;
    return 0;
}