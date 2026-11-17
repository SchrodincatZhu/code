#include <stdio.h>
#include <limits.h>

int get_numbers(char *s, unsigned long long *a)
{
    int n = 0, digit;
    unsigned long long num;

    while (*s != '\0')
    {
        if (*s >= '0' && *s <= '9')
        {
            num = 0;
            while (*s >= '0' && *s <= '9')
            {
                digit = *s - '0';

                /* 先检查乘以 10 再加这一位是否会超出范围。 */
                if (num > (ULLONG_MAX - digit) / 10)
                    return -1;

                num = num * 10 + digit;
                ++s;
            }

            *(a + n) = num;
            ++n;
        }
        else
            ++s;
    }

    return n;
}

int main()
{
    char s[1026];
    unsigned long long a[512];
    int i, n;

    if (fgets(s, sizeof s, stdin) == NULL)
        return 1;

    i = 0;
    while (*(s + i) != '\n' && *(s + i) != '\0')
        ++i;
    if (i > 1024)
    {
        puts("Input is too long.");
        return 1;
    }

    n = get_numbers(s, a);
    if (n < 0)
    {
        puts("An integer is too large.");
        return 1;
    }

    printf("Count: %d\n", n);
    for (i = 0; i < n; ++i)
        printf("%llu\n", *(a + i));

    return 0;
}