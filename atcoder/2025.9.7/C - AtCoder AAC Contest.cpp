#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    long long nA[200000];
    long long nB[200000];
    long long nC[200000];
    long long a[200000];
    for (int i = 0; i < T; i++)
    {
        cin >> nA[i] >> nB[i] >> nC[i];
    }
    for (int i = 0; i < T; i++)
    {
        long long sum = nA[i] + nB[i] + nC[i];
        long long number = nA[i];
        if (nC[i] < number)
        {
            number = nC[i];
        }
        if (sum / 3 < number)
            number = sum / 3;
        a[i] = number;
    }
    for (int i = 0; i < T; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
