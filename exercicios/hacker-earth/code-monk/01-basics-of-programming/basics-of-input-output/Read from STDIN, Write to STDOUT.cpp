#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	string s;
	
	cin >> n;
	cin.ignore();
	getline(cin, s);
	
	cout << 2*n << "\n" << s << "\n";
	
	return 0;
}
