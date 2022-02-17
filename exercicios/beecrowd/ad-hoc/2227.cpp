#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

vector<int> g[102];

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, v, x, y, teste=0;
	
	while (cin >> a >> v and a and v) {
		int maior = 0;
		
		for (int i=0; i<=a; i++)
			g[i].clear();
		
		while (v--) {
			cin >> x >> y;
			
			g[x].push_back(y);
			g[y].push_back(x);
			
			if (g[x].size() > maior)
				maior = g[x].size();
			if (g[y].size() > maior)
				maior = g[y].size();
		}
		
		cout << "Teste " << ++teste << "\n";
		for (int i=0; i<=a; i++) {
			if (g[i].size() == maior)
				cout << i << " ";
		}
		cout << "\n\n";
		
	}
	
	return 0;
}
