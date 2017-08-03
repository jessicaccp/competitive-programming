#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long s = 1;
	int n, m;
	
	cin >> n;
	while (n--) {
		cin >> m;
		s = (s*m)%1000000007;
	}
	
	cout << s << "\n";
	
	return 0;
}F
