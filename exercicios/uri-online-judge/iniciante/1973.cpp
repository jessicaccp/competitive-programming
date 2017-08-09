#include<bits/stdc++.h>
using namespace std;

int v[1000006], q[1000006], p=0;
unsigned long long soma=0;

int main () {
	ios_base::sync_with_stdio(false);

	int n;
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> v[i];
		soma += v[i];
	}
	
	int i=0;
	while (true) {
	
		int ant = v[i];
	
		if (v[i]) {
			v[i]--;
			soma--;
		}
		
		if (q[i] == 0) {
			p++;
			q[i] = 1;
		}
		
		if (ant%2==0)
			i--;
		else
			i++;
			
		if (i<0 or i>n-1)
			break;
	}
	
	cout << fixed << setprecision(0) << p << " " << soma << "\n";

	return 0;
}
