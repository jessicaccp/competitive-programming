#include<bits/stdc++.h>
#define MAX 500

using namespace std;

vector<int> g[MAX];
int cor[MAX], dist[MAX];

void bfs (int v) {	
	queue<int> q;
	q.push(v);
	
	dist[v] = 0;
	cor[v] = 1;
	
	while (! q.empty()) {
		int u = q.front();
		q.pop();
		
		for (int w : g[u])
			if (! cor[w]) {
				cor[w] = 1;
				q.push(w);
				dist[w] = dist[u] + 1;
			}
	}
}
