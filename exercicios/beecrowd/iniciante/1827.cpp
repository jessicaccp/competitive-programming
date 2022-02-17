#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	while (cin >> n and n) {
		int m[n][n], a=0;
		
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (i == n/2 and j == n/2)
					m[i][j] = 4;
				else
					if (i>=n/3 and i<n-(n/3) and j>=n/3 and j<n-(n/3))
						m[i][j] = 1;
					else
						if (i==j)
							m[i][j] = 2;
						else
							if (j == n-i-1)
								m[i][j] = 3;
							else
								m[i][j] = 0;
							
				cout << m[i][j];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}
