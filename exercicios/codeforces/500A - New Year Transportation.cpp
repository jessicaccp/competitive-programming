#include<bits/stdc++.h>

using namespace std;

vector<int> v[30004];
int cor[30004], t;
bool aux = true;

void dfs (int u, int t) {
	cor[u] = 1;
	
	if (u == t) {
		aux = false; 
		cout << "YES\n";
	}

	for (const int &x : v[u])
		if (cor[x] == 0 and aux)
			dfs(x, t);
}

int main () {
	ios_base::sync_with_stdio(false);

	int n, t, a;
	cin >> n >> t;
	for (int i=1; i<=n-1; i++) {
		cin >> a;
		v[i].push_back(i+a);
	}
	
	dfs(1, t);
	
	if (aux)
		cout << "NO\n";

	return 0;
}
