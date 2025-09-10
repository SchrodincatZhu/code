#include <iostream>
using namespace std;
int main()
{
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    int money = 0;
    int save = 0;
    for (int i = 0; i < 12; i++)
    {
        int last = 0;
        int b = 0;
        money += 300;
        if (money < a[i])
        {
            cout << -i - 1;
            return 0;
        }
        else
        {

            last = money - a[i];
            b = last / 100;
            save += b * 100;
            money = last - b * 100;
        }
    }
    cout << money + save * 1.2;
    return 0;
}