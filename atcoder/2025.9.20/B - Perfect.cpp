#include <iostream>
using namespace std;
int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    int a[N + 1][M + 1] = {0};
    int b[N + 1] = {0};
    int c[N + 1] = {0};
    int person, answer;
    int order = 1;
    for (int i = 0; i < K; i++)
    {
        cin >> person >> answer;
        a[person][answer] = 1;

        int number = 0;

        if (b[person] == 0)
        {
            for (int j = 1; j <= M; j++)
            {
                if (a[person][j] == 1)
                {
                    number++;
                }
            }
            if (number == M)
            {
                b[person] = 1;
                c[order] = person;
                order++;
            }
        }
    }
    for (int i = 1; i < order; i++)
    {
        if (i > 1)
        {
            cout << ' ';
        }
        cout << c[i];
    }

    return 0;
}