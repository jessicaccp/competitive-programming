#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, a, x, soma;
	vector<int> v;
	
	while (cin >> n) {
		v.clear();
		x = soma = 0;
		
		for (int i=0; i<n; i++) {
			cin >> a;
			v.push_back(a);
			soma += a;
		}
		
		for (int i=0; i<n; i++) {
			if (!i or max(soma, x)-min(soma, x) > max(soma-v[i], x+v[i])-min(soma-v[i], x+v[i])) {
				x += v[i];
				soma -= v[i];
			}
			else
				break;
		}
		
		cout << min(x, soma) << " " << max(x, soma) << "\n";
	}
	
	return 0;
}
