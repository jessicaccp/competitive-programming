#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int m, n, x, y;
	
	while (cin >> m >> n and (m or n)) {
		cin.ignore();
		string a[m];
	
		for (int i=0; i<m; i++)
			getline(cin, a[i]);
			
		cin >> x >> y;
		string b[x], c[x];
		
		for (int i=0; i<m; i++) {
			b[i] = "";
			for (int j=0; j<n; j++)
				for (int k=0; k<y/n; k++)
					b[i] += a[i][j];
		}
		
		int k = 0;
		for (int i=0; i<n; i++)
			for (int j=0; j<x/m; j++) {
				c[k] = b[i];
				k++;
			}
			
		for (int i=0; i<x; i++)
			cout << c[i] << "\n";
		
		cout << "\n";
	}
			
	return 0;
}
