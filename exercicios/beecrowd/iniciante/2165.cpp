#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a;
	getline(cin, a);
	
	if (a.size()>140)
		cout << "MUTE\n";
	else
		cout << "TWEET\n";

	return 0;
}
