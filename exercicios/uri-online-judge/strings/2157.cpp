#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	string a = "", d;
	int c, b, e;
	
	cin >> c;
	while (c--) {
		cin >> b >> e;
		for (int i=b; i<=e; i++) {
			a += to_string(i);
		}
		d = a;
		reverse(d.begin(), d.end());
		a = a+d;
		
		cout << a << "\n";
		a = "";
	}

	return 0;
}
