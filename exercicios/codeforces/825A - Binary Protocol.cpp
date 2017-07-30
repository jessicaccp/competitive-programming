#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, zero=0, um=0;
	string s;
	
	cin >> n >> s;
	
	for (int i=0; i<n; i++)
		if (s[i] == '1') {
			um++;
			
			if (s[i-1] == '0') {
				if (zero>1) {
					zero--;
					while (zero--)
						cout << 0;
				}
				zero = 0;
			}
			if (i==n-1)
				cout << um;
		}
		else {
			zero++;
			
			if (s[i-1] == '1') {
				cout << um;
				um = 0;
			}
			
			if (i==n-1) {
				while (zero--)
					cout << 0;
			}
		}
		
	
	return 0;
}
