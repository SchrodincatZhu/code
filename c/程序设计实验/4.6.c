#include <stdio.h>
int main()
{
    double x, y;

    printf("输入x: ");
    if (scanf("%lf", &x) != 1)
        return 1;

    if (x < 1)
        y = x;
    else if (x < 10)
        y = 2 * x - 1;
    else
        y = 3 * x - 11;

    printf("x = %g, y = %g\n", x, y);
    return 0;
}
