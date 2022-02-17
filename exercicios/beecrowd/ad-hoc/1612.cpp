#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	long long int x;
	int t;
	cin >> t;
	while (t--) {
		cin >> x;
		if (x%2 == 0)
			cout << x/2 << "\n";
		else
			cout << (long long int)((x/2)+1) << "\n";
	}

	return 0;
}
