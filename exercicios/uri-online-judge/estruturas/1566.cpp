#include<bits/stdc++.h>
using namespace std;

vector<int> g[10004];

int main () {
	ios_base::sync_with_stdio(false);

	int t, n, x;
	vector<int> v;
	
	cin >> t;
	while (t--) {
		v.clear();
		cin >> n;
		
		while (n--) {
			cin >> x;
			v.push_back(x);
		}
		
		sort(v.begin(), v.end());
		
		for (int i=0; i<v.size(); i++)
			if (i)
				cout << " " << v[i];
			else
				cout << v[i];
		cout << "\n";
	}

	return 0;
}
