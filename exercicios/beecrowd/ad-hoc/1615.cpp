#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, v[15], m, n, x;
	
	cin >> t;
	while (t--) {
		memset(v, 0, sizeof(v));
		int r = -1;
	
		cin >> n >> m;
		for (int i=0; i<m; i++) {
			cin >> x;
			v[x]++;
		}
		
		for (int i=1; i<=n; i++)
			if (v[i] > (double)(m)/2.0)
				r = i;
				
		cout << r << "\n";
	}

	return 0;
}
