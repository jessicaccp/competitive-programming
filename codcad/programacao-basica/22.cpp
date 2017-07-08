#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int n, a, i = 1, soma = 0, d=0;
	
	cin >> n;
	
	while (i<=n) {
		cin >> a;
		soma += a;
		if (soma >= 1000000 && d==0)
			d = i;
		i++;
	}
	
	cout << d << "\n";
	
	return 0;
}
