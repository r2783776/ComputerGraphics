#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    cout << floor(sqrt(a*a + b*b + c*c));

    return 0;
}