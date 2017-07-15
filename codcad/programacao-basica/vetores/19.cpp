#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int b, n, d, c, v;
	
	while (cin >> b >> n and b and n) {
		int r[b];
		
		for (int i=0; i<b; i++)
			cin >> r[i];
		
		for (int i=0; i<n; i++) {
			cin >> d >> c >> v;
			r[d-1] -= v;
			r[c-1] += v;
		}
		
		for (int i=0; i<b; i++)
			if (r[i] < 0) {
				cout << "N\n";
				break;
			}
			else if (i==b-1 and r[i]>=0)
				cout << "S\n";
	}
	
	return 0;
}
