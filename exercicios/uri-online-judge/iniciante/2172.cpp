#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	unsigned long long x, m;
	
	while (cin >> x >> m and (x or m)) {
		cout << (unsigned long long)(x*m) << "\n";
	}
	
	return 0;
}
