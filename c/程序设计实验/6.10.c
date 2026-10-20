#include <stdio.h>
int main()
{
    char text[3][81] = {{0}};
    int i, j, ch;
    int upper = 0, lower = 0;
    int digit = 0, space = 0, other = 0;
    printf("请输入三行文字：\n");
    for (i = 0; i < 3; i++)
    {
        j = 0;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            if (j < 80)
                text[i][j++] = ch;
        }
        text[i][j] = '\0';
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; text[i][j] != '\0'; j++)
        {
            ch = text[i][j];

            if (ch >= 'A' && ch <= 'Z')
                upper++;
            else if (ch >= 'a' && ch <= 'z')
                lower++;
            else if (ch >= '0' && ch <= '9')
                digit++;
            else if (ch == ' ')
                space++;
            else
                other++;
        }
    }
    printf("大写字母：%d\n", upper);
    printf("小写字母：%d\n", lower);
    printf("数字：%d\n", digit);
    printf("空格：%d\n", space);
    printf("其他字符：%d\n", other);
    return 0;
}