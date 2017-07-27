#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a;
	int n, m, p, b;
	
	cin >> n;
	while (n--) {
		double soma = 0.0;
		cin >> m;
		pair<string, double> pa[m];
		
		for (auto &i : pa)
			cin >> i.first >> i.second;
			
		cin >> p;
		while (p--) {
			cin >> a >> b;
			for (auto i : pa)
				if (a == i.first)
					soma += b*i.second;
		}
		
		cout << fixed << setprecision(2);
		cout << "R$ " << soma << "\n";
		
	}

	return 0;
}
