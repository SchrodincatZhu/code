#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int type[3];
    int price[3];
    int W[3];

    for (int i = 0; i < 3; i++)
    {

        cin >> type[i] >> price[i];
        if (n % type[i] == 0)
        {
            W[i] = price[i] * (n / type[i]);
        }
        else
        {
            W[i] = price[i] * (n / type[i] + 1);
        }
    }
    int min = W[0];
    for (int i = 0; i < 3; i++)
    {
        if (min > W[i])
        {
            min = W[i];
        }
    }
    cout << min;

    return 0;
}
