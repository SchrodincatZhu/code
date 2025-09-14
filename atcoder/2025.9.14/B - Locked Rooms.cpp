#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    bool L[N];
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }
    int number = 0;
    int number1 = 0;
    for (int i = 0; i < N; i++)
    {
        if (L[i] == 0)
        {
            number++;
        }
        else
            break;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        if (L[i] == 0)
        {
            number1++;
        }
        else
            break;
    }
    int sum = N + 1 - 2 - number - number1;
    if (sum < 0)
    {
        sum = 0;
    }
    cout << sum;
    return 0;
}