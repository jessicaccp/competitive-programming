#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b;
	string c, d, e;
	map<string, string> m;
	
	cin >> a >> b;
	while (a--) {
		cin >> c >> d;
		m.insert({c,d});
	}
	while (b--) {
		cin >> e;
		
		if (m.count(e) > 0)
			cout << m[e] << "\n";
		else if (e[e.length()-1] == 'y' and e[e.length()-2] != 'a' and e[e.length()-2] != 'e' and e[e.length()-2] != 'i' and e[e.length()-2] != 'o' and e[e.length()-2] != 'u') {
			e.resize(e.length()-1);
			cout << e << "ies\n";
		}
		else if (e[e.length()-1] == 'o' or e[e.length()-1] == 's' or e[e.length()-1] == 'x')
			cout << e << "es\n";
		else if (e[e.length()-1] == 'h' and (e[e.length()-2] == 's' or e[e.length()-2] == 'c'))
			cout << e << "es\n";
		else
			cout << e << "s\n";
	}

	return 0;
}
