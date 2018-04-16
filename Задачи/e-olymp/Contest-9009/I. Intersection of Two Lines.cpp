#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int a1 = y2 - y1, b1 = x1 - x2, c1 = y1*x2 - x1*y2;
    int a2 = y4 - y3, b2 = x3 - x4, c2 = y3*x4 - x3*y4;

    double denom = a1*b2 - a2*b1;
    if (denom != 0)
    {
        double x = -(c1*b2 - c2*b1) / denom;
        double y = -(a1*c2 - a2*c1) / denom;
        printf("1\n%.7f %.7f", x, y);
    }
    else
    {
        if ((a1*c2 - c1*a2 == 0) && (b1*c2 - c1*b2 == 0)) printf("2");
        else printf("0");
    }

    return 0;
}