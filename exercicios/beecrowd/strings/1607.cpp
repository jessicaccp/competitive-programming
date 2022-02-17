#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b;
	long long int n, soma;
	
	cin >> n;
	while (n--) {
		cin >> a >> b;
		int tam = a.size();
		soma = 0;
		
		for (int i=0; i<tam; i++) {
			if (a[i] > b[i])
				soma += 26-(a[i]-b[i]);
			else
				soma += b[i]-a[i];
		}
		
		cout << soma << "\n";
	}

	return 0;
}
