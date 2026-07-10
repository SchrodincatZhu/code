#include <iostream>
using namespace std;
int main()
{
    int n, x; // 1到n的整数中，有几个x
    cin >> n >> x;
    int A = 0;

    for (int i = 1; i <= n; i++)
    { // 循环n次，用来遍历1到n的所有数
        int t = i;

        while (t != 0)
        {
            int b = t % 10;
            t = t / 10;
            if (b == x)
            {
                A++;
            }
        }
    }

    cout << A;
    return 0;
}