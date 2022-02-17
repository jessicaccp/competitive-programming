#include<bits/stdc++.h>
using namespace std;

int m, n;
pair<int, int> p[105][105];

void f (int x, int y, int v) {
	if (p[x][y].second < v) {
		p[x][y].second = v;
		
		if (v == 1)
			v++;
		
		if (x-1 >= 0) {
			if (y-1 >= 0)
				f(x-1, y-1, v-1);
			if (y+1 < n)
				f(x-1, y+1, v-1);
			f(x-1, y, v-1);
		}
		
		if (x+1 < m) {
			if (y-1 >= 0)
				f(x+1, y-1, v-1);
			if (y+1 < n)
				f(x+1, y+1, v-1);
			f(x+1, y, v-1);
		}
		
		if (y-1 >= 0)
			f(x, y-1, v-1);
		if (y+1 < n)
			f(x, y+1, v-1);
	}
}

int main () {
	ios_base::sync_with_stdio(false);

	int t, x, y;
	
	cin >> t;
	for (int i=1; i<=t; i++) {
		cin >> m >> n >> x >> y;
		x--; y--;
		
		for (int j=0; j<m; j++)
			for (int k=0; k<n; k++) {
				cin >> p[j][k].first;
				p[j][k].second = 0;
			}
			
		f(x, y, 10);	
		
		cout << "Parede " << i << ":\n";
		for (int j=0; j<m; j++) {
			for (int k=0; k<n; k++)
				if (k)
					cout << " " << p[j][k].first+p[j][k].second;
				else
					cout << p[j][k].first+p[j][k].second;
			cout << "\n";
		}
	}

	return 0;
}
