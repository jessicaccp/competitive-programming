#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t;
	string a;
	
	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, a);
		cout << fixed << setprecision(2) << (double)(a.length()/100.0) << "\n";
	}
	
	return 0;
}
