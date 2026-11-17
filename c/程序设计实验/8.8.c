#include <stdio.h>
void count(int *upper, int *lower, int *space, int *digit, int *other)
{
    int ch;
    *upper = *lower = *space = *digit = *other = 0;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
            ++(*upper);
        else if (ch >= 'a' && ch <= 'z')
            ++(*lower);
        else if (ch == ' ')
            ++(*space);
        else if (ch >= '0' && ch <= '9')
            ++(*digit);
        else
            ++(*other);
    }
}

int main()
{
    int upper, lower, space, digit, other;

    count(&upper, &lower, &space, &digit, &other);
    printf("Uppercase: %d\n", upper);
    printf("Lowercase: %d\n", lower);
    printf("Spaces: %d\n", space);
    printf("Digits: %d\n", digit);
    printf("Other: %d\n", other);

    return 0;
}