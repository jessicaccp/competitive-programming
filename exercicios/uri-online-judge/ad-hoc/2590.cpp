#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	long long int n, x;
	
	cin >> n;
	
	while (n--) {
		cin >> x;
		
		if (! (x & 3))
			cout << 1 << "\n";
		else if (! ((x-1) & 3))
			cout << 7 << "\n";
		else if (! (x & 1))
			cout << 9 << "\n";
		else
			cout << 3 << "\n";
	}
	
	
	return 0;
}
