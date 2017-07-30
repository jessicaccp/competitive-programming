#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int a, b;
	cin >> a;
	while (a--) {
		cin >> b;
		if (b%2 == 0)
			cout << 1 << "\n";
		else
			cout << 9 << "\n";
	}
	
	return 0;
}
