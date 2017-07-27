#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int p, cod, qtd;
	double soma = 0.0;
	
	cin >> p;
	while (p--) {
		cin >> cod >> qtd;
		soma += (cod-1000+0.5)*qtd;
	}
	
	cout << fixed << setprecision(2);
	cout << soma << "\n";

	return 0;
}
