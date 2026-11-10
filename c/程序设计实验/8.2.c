#include <stdio.h>
#include <string.h>

void sort(char **p, int n)
{
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (strcmp(*(p + i), *(p + j)) > 0)
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main()
{
    char s[3][1000];
    char *p[3] = {s[0], s[1], s[2]};
    int i;

    for (i = 0; i < 3; ++i)
    {
        if (fgets(*(p + i), 1000, stdin) == NULL)
            return 1;

        *(*(p + i) + strcspn(*(p + i), "\r\n")) = '\0';
    }

    sort(p, 3);

    for (i = 0; i < 3; ++i)
        puts(*(p + i));

    return 0;
}
