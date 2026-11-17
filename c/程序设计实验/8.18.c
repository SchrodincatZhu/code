#include <stdio.h>
void print_month(int m)
{
    const char *month[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    puts(*(month + m - 1));
}

int main()
{
    int m;

    if (scanf("%d", &m) != 1 || m < 1 || m > 12)
    {
        puts("Invalid month.");
        return 1;
    }
    print_month(m);
    return 0;
}