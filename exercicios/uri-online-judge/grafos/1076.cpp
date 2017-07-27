#include<bits/stdc++.h>

using namespace std;

vector<int> lab[55];
int cor[55];
int e=0;

void dfs (int u) {
	cor[u] = 1;

	for (const int &x : lab[u])
		if (! cor[x]) {
			dfs(x);
			e++;
		}
}

int main () {
	ios_base::sync_with_stdio(false);

	int t, n, v, a, x, y;
	
	cin >> t;
	while (t--) {
		cin >> n >> v >> a;
		
		for (int i=0; i<a; i++) {
			cin >> x >> y;
			lab[x].push_back(y);
			lab[y].push_back(x);
		}
		
		dfs(n);
		cout << 2*e << "\n";
		
		for (int i=0; i<50; i++)
			lab[i].clear();
		memset(cor, 0, sizeof(cor));
		e = 0;
	}

	return 0;
}
