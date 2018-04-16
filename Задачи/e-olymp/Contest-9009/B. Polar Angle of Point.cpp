#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
	cin >> x >> y;
	
    double phi = atan2(y, x);
    if (phi < 0) phi += 2 * M_PI;
    
    printf("%.6f", phi);
    
    return 0;
}