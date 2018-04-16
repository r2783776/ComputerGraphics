#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    if (x1 != y1 && x2 != y2)
    {
        printf("%d %d\n%d %d", x1, y1, x2, y2);
    }
    else
    {
        printf("%d %d\n%d %d", (x1+1), y1, x2, y2);
    }

    return 0;
}