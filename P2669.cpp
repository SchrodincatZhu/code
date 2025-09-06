#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int coin = 0;   // 金币数
    int day = 0;    // 经过的日期数
    int number = 1; // 每天发的金币数
    while (day + number <= k)
    {
        coin = coin + number * number;
        day = day + number;
        number++;
    }
    coin = coin + (k - day) * number;
    cout << coin;
    return 0;
}