#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, q, a, b;
	
	while (cin >> n >> q) {
		vector<int> v;
		
		for (int i=0; i<n; i++) {
			cin >> a;
			v.push_back(-a);
		}
		
		sort(v.begin(), v.end());
		
		for (int i=0; i<q; i++) {
			cin >> b;
			cout << -v[b-1] << "\n";
		}
	}
	
	
	return 0;
}
