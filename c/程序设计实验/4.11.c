#include <stdio.h>
int main(void)
{
    int a[4];

    printf("请输入4个整数：");
    for (int i = 0; i < 4; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("从小到大：");
    for (int i = 0; i < 4; i++)
        printf("%d%c", a[i], i == 3 ? '\n' : ' ');

    return 0;
}