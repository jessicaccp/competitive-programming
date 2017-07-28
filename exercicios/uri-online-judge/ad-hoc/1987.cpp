#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	long long int a, b, soma;

	while (cin >> a >> b) {
		soma = 0;
		
		while (b>=10) {
			soma += b%10;
			b /= 10;
		}
		soma += b;
		
		cout << soma;
		
		if (soma%3 == 0)
			cout << " sim\n";
		else
			cout << " nao\n";
	}

	return 0;
}
