#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int n, ant, cont, x;
	bool aux;
	
	while (cin >> n and n) {
		aux = false;
		cont = 0;
		
		while (!aux) {
			aux = true;
			ant = 0;
			cont++;
			
			for (int i=0; i<n; i++) {
				cin >> x;
				if (x != ant+1)
					aux = false;
				ant = x;
			}
		}
		
		cout << cont << "\n";
	}

	return 0;
}
