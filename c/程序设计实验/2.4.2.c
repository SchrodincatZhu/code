#include <stdio.h>
int main()
{
    int i;
    float num, max;
    scanf("%f", &max);
    for (i = 1; i < 10; i++)
    {
        scanf("%f", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf(" %.2f\n", max);
    return 0;
}