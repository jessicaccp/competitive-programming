#include<bits/stdc++.h>

using namespace std;

vector<int> g[10005];
int dist[10005];

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m, c, jog=0;
	bool aux;
	
	cin >> n >> m;
	
	for (int i=0; i<n; i++) {
		aux = true;
		
		for (int j=0; j<m; j++) {
			cin >> c;
			if (!c)
				aux = false;
		}
		
		if (aux)
		jog++;
	}
	
	cout << jog << "\n";
	
	return 0;
}
