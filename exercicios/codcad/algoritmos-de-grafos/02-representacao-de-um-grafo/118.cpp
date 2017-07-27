#include<bits/stdc++.h>

using namespace std;

vector<int> ilha[100005];

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m, t, a, b;
	cin >> n >> m;
	
	while (m--) {
		cin >> t >> a >> b;
		
		if (t) {
			ilha[a].push_back(b);
			ilha[b].push_back(a);
		}
		else
			if (ilha[a].size()  == 0)
				cout << 0 << "\n";
			else
				for (int i=0; i<ilha[a].size(); i++) {
					if (ilha[a][i] == b) {
						cout << 1 << "\n";
						break;
					}
					else if (i == ilha[a].size()-1)
						cout << 0 << "\n";
				}
	}
	
	return 0;
}
