#include <iostream>
#include <cmath>
using namespace std;
    
int main()
{
    double S, R;
    cin >> S >> R;
    
    double r = sqrt((M_PI * R*R - S) / M_PI);
    
    printf("%.2f", r);
    
    return 0;
}