#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	string s;
	
	cin >> n;
	cin.ignore();
	
	while (n--) {
		getline(cin, s);
		cout << s.size() << "\n";
	}
	
	return 0;
}
