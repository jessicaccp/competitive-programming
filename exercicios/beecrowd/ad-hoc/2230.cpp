#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

vector<int> g[51];
int cor[51], v[51], cid;

int main () {
	ios_base::sync_with_stdio(false);
	
	int c, e, l, p, x, y, teste=1;
	
	while (cin >> c >> e >> l >> p and c and e and l and p) { //vert, ares, atual, ped
		cid = 0;
		memset(v, 0, sizeof(v));
		memset(cor, -1, sizeof(cor));
		
		for (int i=0; i<51; i++)
				g[i].clear();
		
		for (int i=0; i<e; i++) {
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		
		queue<int> q;
		q.push(l);
		cor[l] = 0;
		
		while (! q.empty()) {
			int u = q.front();
			q.pop();
			
			if (cor[u] > 0 and cor[u] <= p)
				v[cid++] = u;
			
			for (int x : g[u])
				if (cor[x] == -1) {
					cor[x] = cor[u]+1;
					q.push(x);
				}
		}
		
		sort(v, v+cid);
		
		cout << "Teste " << teste++ << "\n";
		for (int i=0; i<cid; i++)
			cout << v[i] << " ";
		cout << "\n\n"; 
	}
	
	
	return 0;
}
