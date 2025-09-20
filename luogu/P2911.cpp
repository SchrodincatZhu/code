#include <iostream>
using namespace std;
int main()
{
    int S1, S2, S3;
    cin >> S1 >> S2 >> S3;
    int sum[S1 + S2 + S3 + 1] = {0};

    for (int i = 1; i <= S1; i++)
    {
        for (int j = 1; j <= S2; j++)
        {
            for (int k = 1; k <= S3; k++)
            {
                sum[i + j + k]++;
            }
        }
    }
    int maxnumber = 0;
    int max = 0;
    for (int i = 3; i <= S1 + S2 + S3; i++)
    {
        if (sum[i] > maxnumber)
        {
            maxnumber = sum[i];
            max = i;
        }
    }
    cout << max;
    return 0;
}