#include<bits/stdc++.h>
#define n_MAX 500
#define m_MAX 500

using namespace std;

int n, m, dr[] = {1, 0, -1, 0}, dc[] = {0, 1, 0, -1}, mat[n_MAX][m_MAX];

int floodfill (int r, int c, char k, char p) {
	if (r>=n or r<0 or c>=m or c<0)
		return 0;
	if (mat[r][c] != p)
		return 0;
	
	mat[r][c] = k;
	int ans = 1;
	
	for (int i=0; i<4; i++)
		ans += floodfill(r+dr[i], c+dc[i], k, p);
	
	return ans;
}
