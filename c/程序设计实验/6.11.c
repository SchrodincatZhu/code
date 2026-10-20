#include <stdio.h>
int main()
{
    char pattern[] = "* * * * *";
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i; j++)
            printf("  ");
        for (j = 0; pattern[j] != '\0'; j++)
            putchar(pattern[j]);
        putchar('\n');
    }
    return 0;
}