#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, m, cont=4;
	
	cin >> n;
	while (n--) {
		cin >> m;
		unsigned long long v[m][m], maior[m];
		
		for (int i=0; i<m; i++)
			for (int j=0; j<m; j++) {
				cin >> v[i][j];
				if ((i == 0) or (v[i][j]>maior[j]))
					maior[j] = v[i][j];
			}
			
//		cout << fixed << setprecision(0);
		
		if (cont>4)
			cout << "\n";
			
		cout << "Quadrado da matriz #" << cont++ << ":\n";
		
		for (int i=0; i<m; i++) {
			for (int j=0; j<m; j++)
				if (j==0)
					cout << setw(to_string(maior[j]*maior[j]).size()) << v[i][j]*v[i][j];
				else
					cout << setw(1+to_string(maior[j]*maior[j]).size()) << v[i][j]*v[i][j];
			cout << "\n";
		}
	}

	return 0;
}
