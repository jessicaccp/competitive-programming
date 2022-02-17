#include<bits/stdc++.h>

using namespace std;

vector<int> g[1005];
int esp=0, cor[1005];

void dfs (int v) {
	cor[v] = 1;
	esp++;
	
	for (int i : g[v])
		if (! cor[i])
			dfs(i);
}

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m, a, b;
	while (cin >> n >> m) {
	
		while (m--) {
			cin >> a >> b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
	
		cin >> a;
	
		memset(cor, 0, (n+1)*sizeof(int));
		dfs(a);
	
		cout << esp << "\n";
	
		esp = 0;
		for (int i=0; i<=n; i++)
			g[i].clear();
	}
	
	return 0;
}
