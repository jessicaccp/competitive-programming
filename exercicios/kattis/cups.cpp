#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, x;
	string a, b;
	vector<pair<int, string>> v;
	
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a[0] >= '0' and a[0] <= '9') {
			x = stoi(a, nullptr, 10);
			v.push_back({x, b});
		}
		else {
			x = stoi(b, nullptr, 10);
			x *= 2;
			v.push_back({x, a});
		}
	}
	
	sort(v.begin(), v.end());
	for (int i=0; i<v.size(); i++)
		cout << v[i].second << "\n";
	
	return 0;
}
