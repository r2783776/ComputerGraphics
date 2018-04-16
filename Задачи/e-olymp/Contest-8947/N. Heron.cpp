#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double a, b, c, d, f;
   cin >> a >> b >> c >> d >> f;
   
   double p1 = (a + b + f) / 2;
   double p2 = (c + d + f) / 2;
   double s1 = sqrt(p1 * (p1-a) * (p1-b) * (p1-f));
   double s2 = sqrt(p2 * (p2-c) * (p2-d) * (p2-f));
   double S = s1 + s2;
   
    printf("%.4f", S);

    return 0;
}
