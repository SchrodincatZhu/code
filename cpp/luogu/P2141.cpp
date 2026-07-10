#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number[n];

    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i != j && i != k && j != k)
                {
                    if (number[i] == number[j] + number[k])
                    {
                        answer++;
                        goto next;
                    }
                }
            }
        }
    next:;
    }
    cout << answer;
    return 0;
}