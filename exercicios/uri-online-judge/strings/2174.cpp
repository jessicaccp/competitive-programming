#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	string a;
	
	cin >> n;
	set<string> s;
	while (n--) {
		cin >> a;
		s.insert(a);
	}
	
	cout << "Falta(m) " << 151-s.size() << " pomekon(s).\n";
	
	return 0;
}
