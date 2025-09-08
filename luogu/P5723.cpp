
#include <iostream>
using namespace std;
int main()
{
    int max;
    cin >> max;
    int number = 0;
    int sum = 0;

    if (max == 2)
    {
        cout << 2 << endl
             << 1<<endl;;
        return 0;
    }

    for (int i = 2; i <= max; i++)
    {
        bool a = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                a = 1;
                break;
            }
        }
        if (a == 0 && sum + i <= max)
        {
            number++;
            cout << i << endl;
            sum += i;
        }
    }
    cout << number<<endl;

    return 0;
}
