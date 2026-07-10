#include <iostream>
using namespace std;
int main()
{
    int n; // 购买的张数
    cin >> n;
    int answer[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> answer[i];
    }
    int in[n][7];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin >> in[i][j];
        }
    }
    int out[7]{0};
    for (int i = 0; i < n; i++)
    {
        int number = 0;
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (in[i][j] == answer[k])
                {
                    number++;
                }
            }
        }
        if (number == 1)
        {
            out[6]++;
        }
        else if (number == 2)
        {
            out[5]++;
        }
        else if (number == 3)
        {
            out[4]++;
        }
        else if (number == 4)
        {
            out[3]++;
        }
        else if (number == 5)
        {
            out[2]++;
        }
        else if (number == 6)
        {
            out[1]++;
        }
        else if (number == 7)
        {
            out[0]++;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout << out[i] << ' ';
    }
    return 0;
}