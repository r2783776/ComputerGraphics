#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, xr, yr, x1, y1, x2, y2;
    cin >> r >> xr >> yr >> x1 >> y1 >> x2 >> y2;
    
    x1 -= xr; y1 -= yr;
    x2 -= xr; y2 -= yr;
    
    double a = y2 - y1;
    double b = x1 - x2;
    double c = y1*x2 - x1*y2;

    double x0 = -(a*c) / (a*a + b*b);
    double y0 = -(b*c) / (a*a + b*b);

    if (c*c > r*r * (a*a + b*b)) cout << "-1";
    else if (c*c == r*r * (a*a + b*b)) cout << "0";
    else
    {
	    double d = r*r - c*c / (a*a + b*b);
	    double temp = sqrt(d / (a*a + b*b));
	    double ax, ay, bx, by;
	    ax = x0 + b * temp;
	    bx = x0 - b * temp;
	    ay = y0 - a * temp;
	    by = y0 + a * temp;
	    printf("%.5f", hypot(bx - ax, by - ay));
    }

    return 0;
}