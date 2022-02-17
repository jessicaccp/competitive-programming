#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false); //cin.tie(nullptr);

	int n, a, b;
	
	while (cin >> n and n) {
		int m[n][n];
		
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				m[i][j] = 1 << (i+j);
				
		a = (to_string(m[n-1][n-1])).size();
		
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (j)
					cout << setw(a+1) << m[i][j];
				else
					cout << setw(a) << m[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}
