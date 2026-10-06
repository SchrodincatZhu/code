#include <stdio.h>
int main(void)
{
    int n;
    double score;
    char grade;

    printf("请输入成绩个数：");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("请输入第%d个成绩：", i + 1);
        scanf("%lf", &score);

        if (score < 0 || score > 100)
        {
            printf("成绩无效\n");
            continue;
        }

        if (score >= 90)
            grade = 'A';
        else if (score >= 80)
            grade = 'B';
        else if (score >= 70)
            grade = 'C';
        else if (score >= 60)
            grade = 'D';
        else
            grade = 'E';

        printf("等级：%c\n", grade);
    }

    return 0;
}