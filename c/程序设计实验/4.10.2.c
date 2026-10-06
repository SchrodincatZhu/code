#include <stdio.h>
int main(void)
{
    int n, level;
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
            level = 1;
        else if (profit <= 200000)
            level = 2;
        else if (profit <= 400000)
            level = 3;
        else if (profit <= 600000)
            level = 4;
        else if (profit <= 1000000)
            level = 5;
        else
            level = 6;

        switch (level)
        {
        case 1:
            bonus = profit * 0.10;
            break;
        case 2:
            bonus = 10000 + (profit - 100000) * 0.075;
            break;
        case 3:
            bonus = 17500 + (profit - 200000) * 0.05;
            break;
        case 4:
            bonus = 27500 + (profit - 400000) * 0.03;
            break;
        case 5:
            bonus = 33500 + (profit - 600000) * 0.015;
            break;
        default:
            bonus = 39500 + (profit - 1000000) * 0.01;
            break;
        }

        printf("奖金总数：%.2f元\n", bonus);
    }

    return 0;
}