#include <stdio.h>
void transpose(int a[3][3])
{
    int i, j, temp;

    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}
int main()
{
    int a[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (scanf("%d", &a[i][j]) != 1)
                return 1;
        }
    }
    transpose(a);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}