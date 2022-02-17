#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, d, s;
	string data;
	bool aux;
	
	while (cin >> n >> d) {
		aux = true;
		
		for (int i=0; i<d; i++) {
			cin >> data;
			int soma = 0;
			
			for (int j=0; j<n; j++) {
				cin >> s;
				soma += s;
			}
			
			if (aux and soma == n) {
				cout << data << "\n";
				aux = false;
			}
		}
		if (aux)
			cout << "Pizza antes de FdI\n";
	}
	
	return 0;
}
