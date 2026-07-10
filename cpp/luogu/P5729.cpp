#include <iostream>
using namespace std;
int main()
{
    bool a[21][21][21];
    int w, x, h;
    cin >> w >> x >> h;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < h; k++)
            {
                a[i][j][k] = 1;
            }
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int j = 0; j < w; j++)
        {
            for (int k = 0; k < x; k++)
            {
                for (int s = 0; s < h; s++)
                {
                    if ((x1 - 1 <= j && j <= x2 - 1) && (y1 - 1 <= k && k <= y2 - 1) && (z1 - 1 <= s && s <= z2 - 1))
                    {
                        a[j][k][s] = 0;
                    }
                }
            }
        }
    }
    int number = 0;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < h; k++)
            {
                if (a[i][j][k])
                {
                    number++;
                }
            }
        }
    }
    cout << number;
    return 0;
}