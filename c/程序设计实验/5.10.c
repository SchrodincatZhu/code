#include <stdio.h>
int main()
{
    int denominator = 1;
    int numerator = 2;
    double sum = 0.0;

    for (int i = 0; i < 20; i++)
    {
        sum += (double)numerator / denominator;

        int next = denominator + numerator;
        denominator = numerator;
        numerator = next;
    }

    printf("%.10f\n", sum);
    return 0;
}