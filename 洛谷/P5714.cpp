#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double m, h;
    cin >> m >> h;
    double BMI = m * pow(h, -2.0);
    if (BMI < 18.5)
    {
        cout << "Underweight";
    }
    else if (BMI >= 18.5 && BMI < 24)
    {
        cout << "Normal";
    }
    else
    {
        printf("%.6g\n%s", BMI, "Overweight");
    }
    return 0;
}
