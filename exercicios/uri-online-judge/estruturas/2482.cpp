#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	string a, b;
	map<string, string> m;
	
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, a);
		getline(cin, b);
		m.insert({a, b});
	}
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, a);
		getline(cin, b);
		cout << a << "\n";
		cout << m[b] << "\n\n";
	}

	return 0;
}
