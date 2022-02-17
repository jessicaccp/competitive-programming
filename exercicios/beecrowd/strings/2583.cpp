#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int c, n;
	vector<string> v;
	vector<string>::iterator p;
	string a, b;
	
	cin >> c;
	while (c--) {
		cin >> n;
		v.clear();
		
		while (n--) {
			cin >> a >> b;
			
			if (b == "chirrin")
				v.push_back(a);
			else if (b == "chirrion" and v.size()>0) {
				p = find(v.begin(), v.end(), a);
				if (p != v.end() or *p == a)
					v.erase(p);
			}
		}
		
		sort(v.begin(), v.end());
			
		cout << "TOTAL\n";
		for (int i=0; i<v.size(); i++)
			cout << v[i] << "\n";
	}
	
	return 0;
}
