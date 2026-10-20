#include <stdio.h>
int main()
{
    int a[10];
    int i, j, k, temp;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 9; i++)
    {
        k = i;
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[k])
                k = j;
        }
        if (k != i)
        {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }
    }
    for (i = 0; i < 10; i++)
        printf("%d%c", a[i], i == 9 ? '\n' : ' ');
    return 0;
}