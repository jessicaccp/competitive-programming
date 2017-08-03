#include<bits/stdc++.h>

using namespace std;

long long v[3];

int main () {
	ios_base::sync_with_stdio(false);
	
	long long n, x, i;
	
	cin >> n;
	for (i=1; i<=n; i++) {
		cin >> x;
		v[i%3] += x;
	}
	
	cout << v[1] << " " << v[2] << " " << v[0] << "\n";

	return 0;
}
