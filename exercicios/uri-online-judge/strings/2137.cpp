#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	string a;
	
	while (cin >> n) {
		vector<string> v;
		
		for (int i=0; i<n; i++) {
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		
		for (int i=0; i<n; i++)
			cout << v[i] << "\n";
	}
	
	return 0;
}
