#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m, x, y;
	vector<int> v;
	vector<int>::iterator p;
	
	cin >> n;
	while (n--) {
		cin >> x;
		v.push_back(x);
	}
	
	cin >> m;
	while (m--) {
		cin >> y;
		p = find(v.begin(), v.end(), y);
		v.erase(p);
	}
	
	for (int i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << "\n";
	
	return 0;
}
