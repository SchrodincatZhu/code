#include <stdio.h>
int main()
{
    double factorial = 1.0;
    double sum = 0.0;

    for (int n = 1; n <= 20; n++)
    {
        factorial *= n;
        sum += factorial;
    }

    printf("%22.15e\n", sum);
    return 0;
}