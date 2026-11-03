#include <stdio.h>
double legendre(int n, double x)
{
    if (n == 0)
        return 1.0;

    if (n == 1)
        return x;

    return ((2.0 * n - 1.0) * x * legendre(n - 1, x) - (n - 1.0) * legendre(n - 2, x)) / n;
}
int main()
{
    int n;
    double x;

    if (scanf("%d %lf", &n, &x) != 2 || n < 0)
        return 1;

    printf("%.2f\n", legendre(n, x));

    return 0;
}