#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m, x;
	
	while (cin >> n >> m) {
		vector<int> v;
		int soma = 0;
		
		for (int i=1; i<=n; i++) {
			cin >> x;
			
			if (i>n-m)
				soma += x;
		}
		
		cout << soma << "\n";
	}
	
	return 0;
}
