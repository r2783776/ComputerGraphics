#include <iostream>
#include <cmath>
using namespace std;

double len(double x1, double y1, double x2, double y2)
{
    return hypot(x2 - x1, y2 - y1);
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    double vlen = len(x1, y1, x2, y2);
    
    printf("%.6f", vlen);
    
    return 0;
}