#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m;
	string s;
	vector<pair<int, int>> v;
	
	cin >> n;
	while (n--) {
		v.clear();
		cin >> m >> s;
		
		for (int i=0; i<m; i++)
			if (s[i] != 'A'+i)
				v.push_back({s[i]-'A', i});
				
		if (v.size()>2)
			cout << "There aren't the chance.\n";
		else if (v[0].first == v[1].second and v[1].first == v[0].second)
			cout << "There are the chance.\n";
		else
			cout << "There aren't the chance.\n";
	}

	return 0;
}
