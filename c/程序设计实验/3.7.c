#include <stdio.h>

int main()
{
    const double PI = 3.141592653589793;
    double r, h;

    printf("请输入半径和圆柱高：");
    scanf("%lf%lf", &r, &h);

    printf("圆周长：%.2f\n", 2 * PI * r);
    printf("圆面积：%.2f\n", PI * r * r);
    printf("圆球表面积：%.2f\n", 4 * PI * r * r);
    printf("圆球体积：%.2f\n", 4.0 / 3.0 * PI * r * r * r);
    printf("圆柱体积：%.2f\n", PI * r * r * h);

    return 0;
}
