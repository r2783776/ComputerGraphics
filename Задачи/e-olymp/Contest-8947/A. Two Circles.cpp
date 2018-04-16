#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	
	double dist = hypot(x2 - x1, y2 - y1);

	if (dist != 0)
	{				
		if (dist > r1 + r2 || dist + r2 < r1 || dist + r2 < r1) cout << "0";
		else if (dist == r1 + r2 || dist + r1 == r2 || dist + r2 == r1) cout << "1";
		else cout << "2";
	}
	else	
	{
		if (r1 == r2) cout << "-1";
		else cout << "0";
	}
		
	return 0;
}