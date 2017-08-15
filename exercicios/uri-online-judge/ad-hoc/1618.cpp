#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int t, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
	
	cin >> t;
	while (t--) {
		cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
		
		if (rx>=ax and rx<=cx and ry>=ay and ry<=cy)
			cout << "1\n";
		else
			cout << "0\n";
	}
	
	return 0;
}
