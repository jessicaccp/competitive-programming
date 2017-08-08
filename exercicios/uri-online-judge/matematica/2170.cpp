#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int proj=0;
	double a, b, c;
	
	while (cin >> a >> b) {
		c = b-a;
		c = (100*c)/a;
		cout << fixed << setprecision(2) << "Projeto " << ++proj << ":\nPercentual dos juros da aplicacao: " << c << " %\n\n";
	}
			
	return 0;
}
