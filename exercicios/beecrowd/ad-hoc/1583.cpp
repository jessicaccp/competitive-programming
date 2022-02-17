#include<bits/stdc++.h>

using namespace std;

int n, m, dr[] = {1, 0, -1, 0}, dc[] = {0, 1, 0, -1};
char mat[60][60];
int aux=0;

void floodfill (int r, int c, char k, char p) {
	if (r>=n or r<0 or c>=m or c<0)
		return;
	if (mat[r][c] != p)
		return;
		
	mat[r][c] = k;
	
	for (int i=0; i<4; i++)
		floodfill(r+dr[i], c+dc[i], k, p);
}

int main () {
	ios_base::sync_with_stdio(false);
	
	while (cin >> n >> m and (n or m)) {	
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++) {
				cin >> mat[i][j];
				if (mat[i][j] == 'T')
					mat[i][j] = 'K';
			}
			
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				if (mat[i][j] == 'K') {
					mat[i][j] = 'A';
					floodfill(i, j, 'T', 'A');
				}
			
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++)
				cout << mat[i][j];
			cout << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}
