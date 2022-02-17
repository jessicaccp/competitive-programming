#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, n;
	double a, b;
	
	while (cin >> t and t) {
		for (int i=1; i<= t; i++) {
			cin >> n >> a >> b;
			cout << fixed << setprecision(2) << "Size #" << i << ":\nIce Cream Used: " << n*(((a+b)/2.0)*5.0) << " cm2\n";
		}
		
		cout << "\n";
	}
			
	return 0;
}
