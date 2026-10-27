#include <stdio.h>
#include <math.h>
void positive(double a, double b, double c)
{
    double delta = b * b - 4 * a * c;
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);

    printf("x1 = %.6f\n", x1);
    printf("x2 = %.6f\n", x2);
}

void zero(double a, double b)
{
    double x = -b / (2 * a);

    printf("x1 = x2 = %.6f\n", x);
}

void negative(double a, double b, double c)
{
    double delta = b * b - 4 * a * c;
    double real = -b / (2 * a);
    double imag = sqrt(-delta) / (2 * fabs(a));

    printf("x1 = %.6f + %.6fi\n", real, imag);
    printf("x2 = %.6f - %.6fi\n", real, imag);
}

int main()
{
    double a, b, c, delta;
    int i;

    for (i = 1; i <= 3; i++)
    {
        printf("请输入第%d组a、b、c：\n", i);

        if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
            return 1;

        if (a == 0)
        {
            printf("a不能为0，不是一元二次方程。\n");
            continue;
        }

        delta = b * b - 4 * a * c;

        if (delta > 0)
            positive(a, b, c);
        else if (delta == 0)
            zero(a, b);
        else
            negative(a, b, c);

        printf("\n");
    }

    return 0;
}