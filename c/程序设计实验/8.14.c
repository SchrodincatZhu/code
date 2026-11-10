#include <stdio.h>
void reverse(int *a, int n)
{
    int *left = a;
    int *right = a + n - 1;
    int temp;

    while (left < right)
    {
        temp = *left;
        *left = *right;
        *right = temp;

        ++left;
        --right;
    }
}

int main()
{
    int a[1000], n, i;

    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
        return 1;

    for (i = 0; i < n; ++i)
        if (scanf("%d", a + i) != 1)
            return 1;

    reverse(a, n);

    for (i = 0; i < n; ++i)
        printf("%d%c", *(a + i), i == n - 1 ? '\n' : ' ');

    return 0;
}
