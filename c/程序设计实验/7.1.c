#include <stdio.h>
int gcd(int a, int b)
{
    int temp;
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(int a, int b)
{
    long long result;
    if (a == 0 || b == 0)
        return 0;
    result = (long long)(a / gcd(a, b)) * b;
    if (result < 0)
        result = -result;
    return result;
}

int main()
{
    int a, b;
    printf("请输入两个整数：\n");
    if (scanf("%d %d", &a, &b) != 2)
        return 1;
    if (a == 0 && b == 0)
    {
        printf("两个数不能同时为0。\n");
        return 0;
    }
    printf("最大公约数：%d\n", gcd(a, b));
    printf("最小公倍数：%lld\n", lcm(a, b));
    return 0;
}