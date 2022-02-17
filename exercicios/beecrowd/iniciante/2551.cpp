#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	double r, t, d;
	
	while (cin >> n) {
		for (int i=1; i<=n; i++) {
			cin >> t >> d;
			if (i== 1 or d/t > r) {
				cout << i << "\n";
				r = d/t;
			}
		}
	}
	
	return 0;
}
