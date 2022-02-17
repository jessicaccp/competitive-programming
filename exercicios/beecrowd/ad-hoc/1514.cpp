#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, soma=0;
	
	while (cin >> a >> b and a and b) {
		int m[a][b], somal[a], somac[b];
		bool i1, i2, i3, i4;
		i1 = i2 = i3 = i4 = true;
		soma = 0;
		
		memset(m, 0, sizeof(m));
		memset(somal, 0, sizeof(somal));
		memset(somac, 0, sizeof(somac));
	
		for (int i=0; i<a; i++)
			for (int j=0; j<b; j++) {
				cin >> m[i][j];
				somal[i] += m[i][j];
				somac[j] += m[i][j];
				
				if (j == b-1) {
					if (somal[i] == b)
						i1 = false;
					if (somal[i] == 0)
						i4 = false;
				}
				
				if (i == a-1) {
					if (somac[j] == a)
						i3 = false;
					if (somac[j] == 0)
						i2 = false;
				}
			}

		if (i1)
			soma++;
		if (i2)
			soma++;
		if (i3)
			soma++;
		if (i4)
			soma++;
			
		cout << soma << "\n";
	}

	return 0;
}
