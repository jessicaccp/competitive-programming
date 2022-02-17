#include<bits/stdc++.h>

using namespace std;

int mat[205][205];
int n, m, dr[] = {1, 0, -1, 0}, dc[] = {0, 1, 0, -1}, menor;

int floodfill (int r, int c, int k, int p) {
	if (r>=n or r<0 or c>=m or c<0)
		return 0;
	if (mat[r][c] != p)
		return 0;

	mat[r][c] = k;
	
	int ans=0;
	ans++; 

	for (int i=0; i<4; i++)
		ans += floodfill(r+dr[i], c+dc[i], k, p);
		
	return ans;
}

int main () {
	ios_base::sync_with_stdio(false);
	
	int ans;
	
	cin >> n >> m;
	
	menor = n*m;
	
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> mat[i][j];
			
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if (mat[i][j] != 50000) {
				ans = floodfill(i, j, 50000, mat[i][j]);
				if (ans < menor)
					menor = ans;
			}
	
	cout << menor << "\n";

	return 0;
}
