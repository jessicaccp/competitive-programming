#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	while (cin >> n and n) {
		int m[n][n], a=0;
		
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=n; j++) {
				if (i==j)
					m[i-1][j-1] = 1;
				else
					if (i<j)
						m[i-1][j-1] = m[i-1][j-2]+1;
					else
						m[i-1][j-1] = m[i-2][j-1]+1;
				
				if (j==1)
					cout << setw(3) << m[i-1][j-1];
				else
					cout << setw(4) << m[i-1][j-1];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}
