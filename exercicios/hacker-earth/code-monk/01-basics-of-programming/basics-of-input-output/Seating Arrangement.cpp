#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, n, m[18][6], aux=0;
	
	for (int i=0; i<18; i++)
		for (int j=0; j<6; j++)
			m[i][j] = ++aux;
	
	cin >> t;
	while (t--) {
		cin >> n;
		
		for (int i=0; i<18; i++)
			for (int j=0; j<6; j++)
				if (m[i][j] == n) {
					if (i%2 == 0)
						cout << m[i+1][5-j] << " ";
					else
						cout << m[i-1][5-j] << " ";
					if (j == 0 or j == 5)
						cout << "WS\n";
					else if (j == 1 or j == 4)
						cout << "MS\n";
					else
						cout << "AS\n";
				}
	}
	
	return 0;
}
