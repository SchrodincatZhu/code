#include <stdio.h>
void move(int *a, int n, int m)
{
    int last;
    int *p;

    if (m == 0)
        return;

    last = *(a + n - 1);

    for (p = a + n - 1; p > a; --p)
        *p = *(p - 1);

    *a = last;

    move(a, n, m - 1);
}

int main()
{
    int a[1000], n, m, i;

    if (scanf("%d%d", &n, &m) != 2 ||
        n < 1 || n > 1000 || m < 0)
        return 1;

    for (i = 0; i < n; ++i)
        if (scanf("%d", a + i) != 1)
            return 1;

    move(a, n, m % n);

    for (i = 0; i < n; ++i)
        printf("%d%c", *(a + i), i == n - 1 ? '\n' : ' ');

    return 0;
}
