#include<bits/stdc++.h>

using namespace std;

int v[1005];

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m[205][205], esp=0, a, b;
	
	cin >> n;
	
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			cin >> m[i][j];
			
	for (int i=0; i<2*n; i++) {
		cin >> a >> b;
		if (! v[m[a][b]]) {
			v[m[a][b]] = 1;
			esp++;
		}
	}
	
	cout << esp << "\n";
		
	return 0;
}
