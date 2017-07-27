#include<bits/stdc++.h>
#define MAX 500
#define oo 0x3f3f3f3f
#define ii pair<int, int>

using namespace std;

vector<int> g[MAX];
int dist[MAX];

int dijkstra (int v, int z) {
	memset(dist, 63, sizeof(dist));
	dist[v] = 0;
	
	priority_queue<ii> pq;
	pq.push({0, v});
	
	while (! pq.empty()) {
		int u = pq.top().second;
		int d = (-1)*pq.top().first;
		pq.pop();
		
		if (d > dist[u])
			continue;
		if (u == z)
			return d;
		
		for (int i=0; i<g[u].size(); i++) {
			int w = g[u][i].second, _d = g[u][i].first;
      
			if (dist[w] > d+_d) {
				dist[w] = d+_d;
				pq.push({(-1)*dist[w], w});
			}
		}
	}
	
	return oo;
}
