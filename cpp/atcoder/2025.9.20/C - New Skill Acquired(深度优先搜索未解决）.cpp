#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int first[N + 1];
    int second[N + 1];
    int skill[N + 1] = {0};
    int number = 0;
    int next[N + 1][2];
    int next_size[N + 1];
    for (int i = 1; i <= N; i++)
    {
        cin >> first[i] >> second[i];
        next_size[i] = 0;
    }
    queue<int> q;

    for (int i = 1; i <= N; i++)
    {
        if (first[i] == 0 && second[i] == 0)
        {
            skill[i] = 1;

            q.push(i);
        }
        else
        {
            if (first[i] != 0)
            {
                next[first[i]][next_size[first[i]]++] = i;
            }
            if (second[i] != 0)
            {
                next[second[i]][next_size[second[i]]++] = i;
            }
        }
    }
    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        for (int i = 1; i <= N; i++)
        {
            int b = next[a][i];
            if (!skill[b])
            {
                skill[b] = 1;
                q.push(b);
            }
        }
    }

    cout << number << endl;
    return 0;
}