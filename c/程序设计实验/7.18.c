#include <stdio.h>
int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int day_of_year(int year, int month, int day)
{
    int days[12] = {31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31};
    int total = day;
    int i;
    if (is_leap_year(year))
        days[1] = 29;
    for (i = 0; i < month - 1; i++)
        total += days[i];
    return total;
}
int main()
{
    int year, month, day;
    if (scanf("%d %d %d", &year, &month, &day) != 3)
        return 1;
    printf("%d\n", day_of_year(year, month, day));
    return 0;
}