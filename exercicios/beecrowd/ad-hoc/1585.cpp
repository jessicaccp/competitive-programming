#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int a, b, c;
	cin >> a;
	while (a--) {
		cin >> b >> c;
		cout << (long long int)((b*c)/2) << " cm2\n";
	}

	return 0;
}
