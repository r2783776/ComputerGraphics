#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double S, a;
   cin >> S >> a;
   
   double D = a*a + 8*S;
   double h = (-a + sqrt(D)) / 2;
   
   printf("%.2f", h);
    
    return 0;
}