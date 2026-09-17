#include <stdio.h>
#include <math.h>
int main()
{
    int i, j;
    int prime;
    for (i = 100; i <= 200; i++)
    {
        prime = 1;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}