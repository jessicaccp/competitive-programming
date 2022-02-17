#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, b, m;
	string s;
	vector<string> v;
	char c;
	
	b = m = 0;
	cin >> n;
	while (n--) {
		cin >> c;
		cin.ignore();
		getline(cin, s);
		v.push_back(s);
		if (c == '+')
			b++;
		else
			m++;
	}
	
	sort(v.begin(), v.end());
	for (int i=0; i<v.size(); i++)
		cout << v[i] << "\n";
	cout << "Se comportaram: " << b << " | Nao se comportaram: " << m << "\n";
			
	return 0;
}
