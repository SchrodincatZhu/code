#include <iostream>
using namespace std;
int main()
{
    int N;
    int R;
    cin >> N >> R;
    int door[N];
    for (int i = 0; i < N; i++)
    {
        cin >> door[i];
    }

    int left = R;
    int leftnumber = 0;
    for (int i = 0; i < R; i++)
    {
        leftnumber = i;
        if (door[i] == 1)
        {
            left--;
            leftnumber = i + 1;
        }
        else
            break;
    }
    int leftops = 0;
    for (int i = R - 1; i >= leftnumber; i--)
    {
        if (door[i] == 1)
        {
            leftops += 1;
            door[i] = 0;
        }
    }
    leftops = leftops + R - leftnumber;

    int right = N - R;
    int rightnumber = 0;
    for (int i = N - 1; i >= R; i--)
    {
        rightnumber = i;
        if (door[i] == 1)
        {
            right--;
            rightnumber = i;
        }
        else
            break;
    }
    int rightops = 0;
    for (int i = R; i <= rightnumber; i++)
    {
        if (door[i] == 1)
        {
            rightops += 1;
            door[i] = 0;
        }
    }
    rightops = rightops - R + rightnumber + 1;
    int ops = 0;
    ops = leftops + rightops;
    cout << ops;
    return 0;
}