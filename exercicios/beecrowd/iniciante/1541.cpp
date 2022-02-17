#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, c;
	double x;
	
	while (cin >> a and a) {
		cin >> b >> c;
		x = (a*b*100)/c;
		x = (int)(sqrt(x));
		cout << x << "\n";
	}

	return 0;
}
