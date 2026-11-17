#include <stdio.h>
void copy(char *s, char *t, int m)
{
    s = s + m - 1;
    while (*s != '\0')
    {
        *t = *s;
        ++s;
        ++t;
    }
    *t = '\0';
}
int main()
{
    char s[1026], t[1025];
    int m, n = 0;
    if (fgets(s, sizeof s, stdin) == NULL)
        return 1;

    while (*(s + n) != '\n' && *(s + n) != '\0')
        ++n;
    if (n > 1024)
    {
        puts("String is too long.");
        return 1;
    }
    *(s + n) = '\0';

    if (scanf("%d", &m) != 1 || m < 1 || m > n)
    {
        puts("Invalid position.");
        return 1;
    }

    copy(s, t, m);
    puts(t);

    return 0;
}