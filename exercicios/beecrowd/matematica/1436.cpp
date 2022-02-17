#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, n, teste = 0;
	cin >> t;
	
	while (t--) {
		cin >> n;
		vector<int> v(n);
		
		for (int &i:v)
			cin >> i;
		
		sort(v.begin(), v.end());
		
		cout << "Case " << ++teste << ": " << v[(n/2)] << "\n";
	}
	
	return 0;
}
