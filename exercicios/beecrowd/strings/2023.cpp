#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b;
	vector<pair<string, string>> v;
	
	while (getline(cin, a)) {
		b = "";
		
		for (int i=0; i<a.length(); i++)
			b += tolower(a[i]);
			
		v.push_back({b, a});
	}
	
	sort(v.begin(), v.end());
	int tam = v.size();
	cout << v[tam-1].second << "\n";
	
	return 0;
}
