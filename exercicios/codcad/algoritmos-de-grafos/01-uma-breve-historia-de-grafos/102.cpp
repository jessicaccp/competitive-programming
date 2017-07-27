#include<bits/stdc++.h>

using namespace std;

int v[102];

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, teste=0, aux =0, maior=0, c, d;
	while (cin >> a >> b and a and b) {
		for (int i=0; i<b; i++) {
			cin >> c >> d;
			v[c-1]++;
			v[d-1]++;
		
			if (v[c-1] > maior)
				maior = v[c-1];
			if (v[d-1] > maior)
				maior = v[d-1];
		}
	
		if (teste > 0)
			cout << "\n";
		cout << "Teste " << ++teste << "\n";
		for (int i=0; i<a; i++)
			if (v[i] == maior)
				if (aux > 0)
					cout << " " << i+1;
				else
					cout << i+1, aux++;
					
		cout << "\n";
		aux = maior = 0;
		memset(v, 0, sizeof(v));
	}
	
	

	return 0;
}
