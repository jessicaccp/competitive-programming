#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int c, n, m, p, x, y;
	char v[1005][1005];
	
	cin >> c;
	while (c--) {
		cin >> n >> m >> p;
		
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				cin >> v[i][j];
				
		while (p--) {
			int trop = 0;
			cin >> x >> y;
			x--; y--;
			
			if (x-1>=0 and y-1>=0 and v[x-1][y-1] == 'T')
				trop++;
			if (x-1>=0 and v[x-1][y] == 'T')
				trop++;
			if (x-1>=0 and y+1<m and v[x-1][y+1] == 'T')
				trop++;
			if (y-1>=0 and v[x][y-1] == 'T')
				trop++;
			if (v[x][y] == 'T')
				trop++;
			if (y+1<m and v[x][y+1] == 'T')
				trop++;
			if (x+1<n and y-1>=0 and v[x+1][y-1] == 'T')
				trop++;
			if (x+1<n and v[x+1][y] == 'T')
				trop++;
			if (x+1<n and y+1<m and v[x+1][y+1] == 'T')
				trop++;
			
			if (trop >= 5)
				cout << "GRRR\n";
			else
				cout << "GG IZI\n";
				
		}
	}
	
	return 0;
}
