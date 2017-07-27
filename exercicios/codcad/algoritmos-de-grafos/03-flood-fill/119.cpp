#include<bits/stdc++.h>

using namespace std;

vector<int> g[1003];
int cor[1003], gr;

void dfs (int v) {
	cor[v] = 1;
	
	for (int i : g[v])
		if (! cor[i])
			dfs(i);
}

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m, i, j;
	cin >> n >> m;
	
	while (m--) {
		cin >> i >> j;
		g[i].push_back(j);
		g[j].push_back(i);
	}
	
	for (int k=1; k<=n; k++)
		if (! cor[k]) {
			gr++;
			dfs(k);
		}
	
	cout << gr << "\n";
	
	return 0;
}
