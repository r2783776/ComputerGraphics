#include <iostream>
using namespace std;

short max(short a, short b, short c)
{
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    short m = max(a, b, c);
    short temp = a;
    a = m;
    if (m == b) b = temp;
    else if (m == c) c = temp;
    
    if (b + c <= a) cout << "IMPOSSIBLE";
    else
    {
        if (a*a > b*b + c*c) cout << "OBTUSE";
        else if (a*a == b*b + c*c) cout << "RIGHT";
        else cout << "ACUTE";
    }
    
    return 0;
}
