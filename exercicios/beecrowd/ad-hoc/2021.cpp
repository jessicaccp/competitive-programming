#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int m, n, p, x;
	
	while (cin >> m >> n >> p and (m or n or p)) {
		int soma = 0;
		
		while (p--) {
			cin >> x;
			while (x>n)
				x -= n;
				
			soma += n+1-x;
		}
		
		cout << "Lights: " << soma << "\n";
	}

	return 0;
}
