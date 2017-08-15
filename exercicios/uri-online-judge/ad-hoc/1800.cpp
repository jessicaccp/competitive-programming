#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int q, e, x;
	vector<int> v;
	vector<int>::iterator p;
	
	cin >> q >> e;
	while (e--) {
		cin >> x;
		v.push_back(x);
	}
	while (q--) {
		cin >> x;
		p = find(v.begin(), v.end(), x);
		if (p != v.end())
			cout << 0 << "\n";
		else {
			cout << 1 << "\n";
			v.push_back(x);
		}
	}

	return 0;
}
