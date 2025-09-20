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

    int left = N + 1;
    int right = 0;
    int open = 0;
    for (int i = 0; i < N; i++)
    {
        if (door[i] == 0)
        {
            left = min(left, i + 1);
            right = max(right, i + 1);
            open++;
        }
    }
    if (open == 0)
    {
        cout << 0;
        return 0;
    }
    left = min(left, R + 1);
    right = max(right, R);
    int ops = 2 * (right - left + 1) - open;
    cout << ops;
    return 0;
}