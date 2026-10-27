#include <stdio.h>
void concatenate(char s1[], const char s2[])
{
    int i = 0, j = 0;

    while (s1[i] != '\0')
        i++;

    while (s2[j] != '\0')
        s1[i++] = s2[j++];

    s1[i] = '\0';
}

int main()
{
    char s1[200], s2[100];

    scanf("%99s %99s", s1, s2);
    concatenate(s1, s2);
    printf("%s\n", s1);

    return 0;
}