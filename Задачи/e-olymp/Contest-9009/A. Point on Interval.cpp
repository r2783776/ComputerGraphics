#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, alpha;
    cin >> x1 >> y1 >> x2 >> y2 >> alpha;
    
    double x0 = (x1 + alpha*x2) / (1 + alpha);
    double y0 = (y1 + alpha*y2) / (1 + alpha);
    
    printf("%.2f %.2f", x0, y0);
    
    return 0;
}