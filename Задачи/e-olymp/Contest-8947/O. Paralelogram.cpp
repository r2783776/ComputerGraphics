#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double a, b, c, d;
   cin >> a >> b >> c >> d;
   
   bool isPargm = false;
   
   if ((a == b) && (c == d)) isPargm = true;
    if ((a == c) && (b == d)) isPargm = true;
    if ((a == d) && (b == c)) isPargm = true;
   
    cout << ((isPargm) ? "YES" : "NO");
    
    return 0;
}