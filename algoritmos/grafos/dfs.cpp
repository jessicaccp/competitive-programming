#include<bits/stdc++.h>
#define MAX 500

using namespace std;

vector<int> g[MAX];
int cor[MAX], dist[MAX];

void dfs (int v) {
	cor[v] = 1;
	
	for (int i : g[v])
		if (! cor[i]) {
			dist[i] = dist[v] + 1;
			dfs(i);
		}
}
