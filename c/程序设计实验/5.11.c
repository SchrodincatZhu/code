#include <stdio.h>
int main()
{
    double height = 100.0;
    double distance = 0.0;

    for (int i = 1; i <= 10; i++)
    {
        distance += height;
        height /= 2.0;

        if (i < 10)
            distance += height;
    }

    printf("第10次落地时共经过：%.6f 米\n", distance);
    printf("第10次反弹高度：%.6f 米\n", height);
    return 0;
}