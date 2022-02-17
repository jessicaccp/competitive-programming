#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int t, d, i, b, q, x, y, custo, maior;
	
	cin >> t;
	while (t--) {
		cin >> d >> i >> b;
		int ing[i]; maior = 0;
		
		for (int a=0; a<i; a++)
			cin >> ing[a];
			
		for (int a=0; a<b; a++) {
			custo = 0;
			cin >> q;
			
			for (int b=0; b<q; b++) {
				cin >> x >> y;
				custo += ing[x]*y;
			}
			
			if (d/custo > maior)
				maior = d/custo;
		}
		
		cout << maior << "\n";
			
	}

	return 0;
}
