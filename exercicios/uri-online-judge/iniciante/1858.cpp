#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int a, b, m, pos;
	
	cin >> a;
	int v[a];

	for (int i=0; i<a; i++) {
		cin >> b;
		
		if (i==0 or b<m) {
			m = b;
			pos = i;
		}
	}
	
	cout << pos+1 << "\n";

	return 0;
}
