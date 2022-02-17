#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	string a;
	double b, v[7], soma;
	
	cin >> n;
	while (n--) {
		soma = 0.0;
		cin >> a >> b;
		
		for (int i=0; i<7; i++) {
			cin >> v[i];
			soma += v[i];
		}
			
		sort (v, v+7);
		soma -= v[0] + v[6];
		
		cout << fixed << setprecision(2);
		cout << a << " " << soma*b << "\n";
	}
	
	return 0;
}
