#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, x, y;
	bool aux;
	
	while (cin >> n) {
		int t = 0;
		aux = false;
		
		for (int i=0; i<n-1; i++) {
			cin >> x >> y;
			
			if (x == n) {
				aux = true;
				if (y == 0)
					t++;
			}
			else if (aux and y == 1)
				t++;
		}
		
		cout << t << "\n";
	}
	
	return 0;
}
