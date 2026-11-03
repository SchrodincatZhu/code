#include <stdio.h>
#include <math.h>
double root(double a, double b, double c, double d)
{
    double x0 = 1.0;
    double x, f, df, error;
    do
    {
        f = ((a * x0 + b) * x0 + c) * x0 + d;
        df = (3.0 * a * x0 + 2.0 * b) * x0 + c;
        x = x0 - f / df;
        error = fabs(x - x0);
        x0 = x;
    } while (error > 1e-3);
    return x;
}
int main()
{
    double a, b, c, d;
    if (scanf("%lf %lf %lf %lf", &a, &b, &c, &d) != 4)
        return 1;
    printf("%.6f\n", root(a, b, c, d));

    return 0;
}