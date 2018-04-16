#include <iostream>

using namespace std;

int main() {
	int x0, y0, x1, y1, x2, y2;
	cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
	
	int v10x = x0 - x1, v10y = y0 - y1;
	int v12x = x2 - x1, v12y = y2 - y1;
    int v01x = -v10x, v01y = -v10y;
    int v02x = x2 - x0, v02y = y2 - y0;
	
	if (v10x*v12y == v12x*v10y && v01x*v02x + v01y*v02y <= 0) cout << "YES";
	else cout << "NO";
	
	return 0;
}