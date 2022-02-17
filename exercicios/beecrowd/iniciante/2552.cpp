#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m;
	
	while (cin >> n >> m) {
		int mat[n][m];
		
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++) {
				cin >> mat[i][j];
				if (mat[i][j] == 1)
					mat[i][j] = 9;
			}
			
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				if (mat[i][j] == 0) {
					if (i+1 < n and mat[i+1][j] == 9)
						mat[i][j]++;
					if (i-1 >= 0 and mat[i-1][j] == 9)
						mat[i][j]++;
					if (j+1 < m and mat[i][j+1] == 9)
						mat[i][j]++;
					if (j-1 >= 0 and mat[i][j-1] == 9)
						mat[i][j]++;
				}
				cout << mat[i][j];
			}
			cout << "\n";
		}
	}
	
	return 0;
}
