#include <stdio.h>
#include <string.h>
void countCharacters(const char str[], int count[])
{
    int i;
    unsigned char ch;

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = (unsigned char)str[i];

        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z'))
            count[0]++;
        else if (ch >= '0' && ch <= '9')
            count[1]++;
        else if (ch == ' ')
            count[2]++;
        else
            count[3]++;
    }
}
int main(void)
{
    char str[1000];
    int count[4] = {0};

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    str[strcspn(str, "\r\n")] = '\0';
    countCharacters(str, count);
    printf("Letters: %d\n", count[0]);
    printf("Digits: %d\n", count[1]);
    printf("Spaces: %d\n", count[2]);
    printf("Others: %d\n", count[3]);
    return 0;
}