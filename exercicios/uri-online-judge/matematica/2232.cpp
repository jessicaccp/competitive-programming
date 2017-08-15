#include<bits/stdc++.h>
using namespace std;

vector<int> g[10004];

int main () {
	ios_base::sync_with_stdio(false);

	int t, n;
	unsigned long long soma;
	
	cin >> t;
	while (t--) {
		cin >> n;
		
		soma = 0;
		for (int i=0; i<n; i++)
			soma += pow(2, i);
			
		cout << soma << "\n";		
	}

	return 0;
}
