#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    
    if (a*x + b*y + c == 0) cout << "YES";
    else cout << "NO";
    
    return 0;
}