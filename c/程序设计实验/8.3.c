#include <stdio.h>

int input(int *a)
{
    int *p;

    for (p = a; p < a + 10; ++p)
    {
        if (scanf("%d", p) != 1)
            return 0;
    }

    return 1;
}

void process(int *a)
{
    int *p, *min = a, *max;
    int temp;

    for (p = a + 1; p < a + 10; ++p)
    {
        if (*p < *min)
            min = p;
    }

    temp = *a;
    *a = *min;
    *min = temp;

    max = a;

    for (p = a + 1; p < a + 10; ++p)
    {
        if (*p > *max)
            max = p;
    }

    temp = *(a + 10 - 1);
    *(a + 10 - 1) = *max;
    *max = temp;
}

void output(int *a)
{
    int *p;

    for (p = a; p < a + 10; ++p)
        printf("%d%c", *p, p == a + 10 - 1 ? '\n' : ' ');
}

int main()
{
    int a[10];

    if (!input(a))
        return 1;

    process(a);
    output(a);

    return 0;
}