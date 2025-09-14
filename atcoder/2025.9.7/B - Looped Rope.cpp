#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    vector<string> a(H);
    for (int i = 0; i < H; i++)
    {
        cin >> a[i];
    }
    int x[4] = {-1, 1, 0, 0};
    int y[4] = {0, 0, -1, 1};
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (a[i][j] == '#')
            {
                int answer = 0;
                for (int k = 0; k < 4; k++)
                {
                    int ni = i + x[k];
                    int nj = j + y[k];
                    if (ni >= 0 && ni < H && nj >= 0 && nj < W)
                    {
                        if (a[ni][nj] == '#')
                        {
                            answer++;
                        }
                    }
                }
                if (answer != 2 && answer != 4)
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
