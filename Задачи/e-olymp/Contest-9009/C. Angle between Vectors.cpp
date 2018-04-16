#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    double angle = acos((x1*x2 + y1*y2) / (hypot(x1, y1) * hypot(x2, y2)));
    
    printf("%.5f", angle);
    
    return 0;
}