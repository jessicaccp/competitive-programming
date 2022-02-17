#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	map<string, int> m;
	int t, a;
	string b;
	
	m.insert({"suco de laranja", 120});
	m.insert({"morango fresco", 85});
	m.insert({"mamao", 85});
	m.insert({"goiaba vermelha", 70});
	m.insert({"manga", 56});
	m.insert({"laranja", 50});
	m.insert({"brocolis", 34});
	
	while (cin >> t and t) {
		int soma=0;
		
		while (t--) {
			cin >> a;
			cin.ignore();
			getline(cin, b);
			
			soma += a*m[b];
		}
		
		if (soma > 130)
			cout << "Menos " << soma-130 << " mg\n";
		else if (soma < 110)
			cout << "Mais " << 110-soma << " mg\n";
		else
			cout << soma << " mg\n";
	}
		
	return 0;
}
