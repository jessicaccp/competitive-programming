#include<bits/stdc++.h>

using namespace std;

int n, m, mat[1030][1030], dr[] = {1, 0, -1, 0}, dc[] = {0, 1, 0, -1};
int aux=0;

void floodfill (int r, int c, int k, int p) {
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
	
	char let;
	
	cin >> n >> m;
	
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) {
			cin >> let;
			if (let == '.')
				mat[i][j] = 0;
			else if (let == 'o')
				mat[i][j] = 1;
		}
		
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if (mat[i][j] == 0) {
				floodfill(i, j, 2, 0);
				aux++;
			}
	
	cout << aux << "\n";
	
	
	return 0;
}
