#include <iostream>
using namespace std;

int main() {
	int x, y, r, ax, ay;
	cin >> x >> y >> r >> ax >> ay;
	
	ax -= x; ay -= y;

	
	if (ax*ax + ay*ay <= r*r) cout << "YES";
	else cout << "NO";
	
	return 0;
}