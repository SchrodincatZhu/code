#include <stdio.h>
int main(void)
{
    int n;
    double profit, bonus;

    printf("请输入利润个数：");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("请输入第%d个利润：", i + 1);
        scanf("%lf", &profit);

        if (profit < 0)
        {
            printf("利润无效\n");
            continue;
        }

        if (profit <= 100000)
            bonus = profit * 0.10;
        else if (profit <= 200000)
            bonus = 10000 + (profit - 100000) * 0.075;
        else if (profit <= 400000)
            bonus = 17500 + (profit - 200000) * 0.05;
        else if (profit <= 600000)
            bonus = 27500 + (profit - 400000) * 0.03;
        else if (profit <= 1000000)
            bonus = 33500 + (profit - 600000) * 0.015;
        else
            bonus = 39500 + (profit - 1000000) * 0.01;

        printf("奖金总数：%.2f元\n", bonus);
    }

    return 0;
}