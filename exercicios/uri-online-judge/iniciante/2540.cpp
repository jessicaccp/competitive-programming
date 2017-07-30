#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	double a, soma, i, b;
	
	while (cin >> a) {
		soma = 0;
		for (int i=0; i<a; i++) {
			cin >> b;
			soma += b;
		}
		if (soma >= (2.0*a)/3.0)
			cout << "impeachment\n";
		else
			cout << "acusacao arquivada\n";
	}
	
	
	return 0;
}
