#include <stdio.h>
#include <string.h>
void reverse(char str[])
{
    int i;
    int length = (int)strlen(str);
    char temp;

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}
int main()
{
    char str[100];

    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    str[strcspn(str, "\n")] = '\0';
    reverse(str);
    printf("%s\n", str);
    return 0;
}