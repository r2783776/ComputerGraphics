#include <iostream>
#include <cmath>
using namespace std;
    
int main()
{
    int a;
    cin >> a;
    
    double P = 3 * a;
    double S = sqrt(3)/4 * a*a;
    
    printf("%.4f %.4f", P, S);
    
    return 0;
}