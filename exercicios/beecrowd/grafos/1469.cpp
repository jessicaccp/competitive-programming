#include<bits/stdc++.h>

using namespace std;

vector<int> g[505];
int cor[505], idade[505], menor;
bool aux = true;

void dfs (int v) {
	cor[v] = 1;
	
	for (int i : g[v]) {
		if (aux) {
			menor = idade[i];
			aux = false;
		}
		else if (idade[i] < menor)
			menor = idade[i];
			
		if (! cor[i])
			dfs(i);
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m, i, x, y;
	char let;
	
	while (cin >> n >> m >> i ) {	
		for (int j=1; j<=n; j++)
			cin >> idade[j];
		
		for (int j=1; j<=m; j++) {
			cin >> x >> y;
			g[y].push_back(x);
		}
	
		while (i--) {
			cin >> let;
		
			if (let == 'T') {
				cin >> x >> y;
				swap(g[x], g[y]);
				 
				for (int j=1; j<=n; j++)
					for (int k=0; k<g[j].size(); k++)
						if (g[j][k] == x)
							g[j][k] = y;
						else if (g[j][k] == y)
							g[j][k] = x;
			}
			else if (let == 'P') {
				cin >> x;
			
				if (! g[x].size())
					cout << "*\n";
				else {
					memset(cor, 0, (n+1)*(sizeof(int)));
					aux = true;
					dfs(x);
					cout << menor << "\n";
				}
			}
		}
		
		for (int j=1; j<=n; j++)
			g[j].clear();
		memset(cor, 0, (n+1)*(sizeof(int)));
	}
	
	return 0;
}
