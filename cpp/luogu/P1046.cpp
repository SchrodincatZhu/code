#include <iostream>
using namespace std;
int main()
{
    int h;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cin >> h;
    int H = h + 30;
    int w = 0;
    for (int i = 0; i < 10; i++)
    {
        if (H >= a[i])
        {
            w++;
        }
    }
    cout << w;
    return 0;
}
