#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int n, x, segundo, menor, posm, poss;
	
	while (cin >> n and n) {
		menor = segundo = 0;
		posm = poss = 0;
		
		for (int i=0; i<n; i++) {
			cin >> x;
			
			if (x>menor) {
				segundo = menor;
				poss = posm;
				menor = x;
				posm = i+1;
			}
			else if (x>segundo) {
				segundo = x;
				poss = i+1;
			}
		}
		
		cout << poss << "\n";
	}

	return 0;
}
