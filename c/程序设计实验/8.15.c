#include <stdio.h>

void print_first_average(double (*a)[5])
{
    int i;
    double sum = 0;

    for (i = 0; i < 4; ++i)
        sum += **(a + i);

    printf("First course average: %.2f\n", sum / 4);
}

void print_failed(double (*a)[5], char (*id)[32], double *avg)
{
    int i, j, n;

    puts("Students failing at least two courses (ID, scores, average):");
    for (i = 0; i < 4; ++i)
    {
        n = 0;
        for (j = 0; j < 5; ++j)
            if (*(*(a + i) + j) < 60)
                ++n;

        if (n >= 2)
        {
            printf("%s", *(id + i));
            for (j = 0; j < 5; ++j)
                printf(" %.2f", *(*(a + i) + j));
            printf(" %.2f\n", *(avg + i));
        }
    }
}

void print_high(double (*a)[5], char (*id)[32], double *avg)
{
    int i, j;

    puts("Students with average >= 90 or every score >= 85 (ID):");
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 5; ++j)
            if (*(*(a + i) + j) < 85)
                break;

        if (*(avg + i) >= 90 || j == 5)
            puts(*(id + i));
    }
}

int main()
{
    double a[4][5], avg[4], sum;
    char id[4][32];
    int i, j;

    for (i = 0; i < 4; ++i)
    {
        if (scanf("%31s", *(id + i)) != 1)
            return 1;

        sum = 0;
        for (j = 0; j < 5; ++j)
        {
            if (scanf("%lf", *(a + i) + j) != 1)
                return 1;
            sum += *(*(a + i) + j);
        }

        *(avg + i) = sum / 5;
    }

    print_first_average(a);
    print_failed(a, id, avg);
    print_high(a, id, avg);

    return 0;
}