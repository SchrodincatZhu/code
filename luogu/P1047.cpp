#include <iostream>

using namespace std;
int main()
{
    int L, m;
    cin >> L >> m;
    int number[m], number1[m];
    int tree = L + 1;
    for (int i = 0; i < m; i++)
    {
        cin >> number[i] >> number1[i];
    }

    for (int i = 0; i < L + 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (number[j] <= i && i <= number1[j])
            {
                tree--;
                break;
            }
        }
    }
    cout << tree;
    return 0;
}