#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b;
	getline(cin, a);
	b = a;
	reverse(a.begin(), a.end());
	
	if (a == b)
		cout << "YES\n";
	else
		cout << "NO\n";
	
	return 0;
}
