#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double s, v;
    cin >> s >> v;
    double t = (double)s / v + 10;
    int tt = ceil(t); // 向上取整
    int h = tt / 60 % 24;
    int m = tt % 60;
    if (m == 0)
    {
        h--;
    }
    int mm = (60 - m) % 60;
    int hh = 7 - h;
    if (hh < 0)
    {
        hh = 24 + hh;
    }
    printf("%02d:%02d", hh, mm);
    return 0;
}

/*
原代码的错误：
你提供的代码在大部分情况下是正确的，但在一个特殊情况下会出错：当计算出的总耗时恰好是整小时（即分钟部分为0）时，你的小时计算会提前一个小时。
例如，如果总耗时是120分钟（正好2小时），你的代码会计算出 05:00，而正确答案应该是 06:00 (8:00 - 2小时)。
这是因为你用 hh = 7 - h 统一处理了借位的情况，但当分钟数为0时，其实是不需要向小时借位的。
*/