#include<bits/stdc++.h>
#define MAX 500

using namespace std;

vector<int> g[MAX];
int cor[MAX], d[MAX], low[MAX], tempo;

void dijkstra (int u, int p) {
	cor[u] = 1;
	d[u] = low[u] = tempo++;
	
	for (const int &v : g[u])
		if (! cor[v]) {
			dijkstra(v, u);
			low[u] = min(low[u], low[v]);
			
			if (low[v] > d[u])
				// u-v é ponte
		}
		else if (v != p)
			low[u] = min(low[u], d[v]);
}
