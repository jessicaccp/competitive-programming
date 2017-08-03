#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int v[n];
	
	for (int i=0; i<n; i++)
		cin >> v[i];
		
	sort(v, v+n);
	
	for (int i=1; i<n; i++)
		if (v[i] != v[i-1] and v[i] != v[i-1]+1) {
			cout << "NO\n";
			return 0;
		}

	cout << "YES\n";
	
	return 0;
}
