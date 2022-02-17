#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	double v, d, r, h, pi=3.14, a;
	
	cout << fixed << setprecision(2);
	
	while (cin >> v >> d) {
		r = d/2;
		a = pi*r*r;
		h = v/a;
		
		cout << "ALTURA = " << h << "\nAREA = " << a << "\n";
	}
	
	return 0;
}
