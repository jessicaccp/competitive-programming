#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, d, n;
	long double x, s, m;
	
	cin >> t;
	while (t--) {
		cin >> d >> n;
		m = 0;
		
		while (n--) {
			s = 0.0;
			cin >> x;
			do
				s += x;
			while (s+x<=d);
			if ((d-s)>m and d-s<=d)
				m = d-s;
		}
		
		cout << fixed << setprecision(2) << m << "\n";
	}

	return 0;
}
