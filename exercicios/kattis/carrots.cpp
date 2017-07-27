#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b;
	string c;
	
	cin >> a >> b;
	cin.ignore();
	while (a--)
		getline(cin, c);
	
	cout << b;
	
	return 0;
}
