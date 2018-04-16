#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double s1, s2, s3;
    double s;
    
    cin >> s1 >> s2 >> s3;
    
    s = sqrt(s1) + sqrt(s2) + sqrt(s3); s*=s;
    
    printf("%.8f", s);

    return 0;
}
