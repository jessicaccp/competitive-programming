#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, b, m[2][3];
	
	cin >> t;
	while (t--) {
		cin >> b;
		
		for (int i=0; i<2; i++)
			for (int j=0; j<3; j++)
				cin >> m[i][j];
				
		double d = (m[0][0]+m[0][1])/2;
		if (m[0][2]%2 == 0)
			d += b;
			
		double g = (m[1][0]+m[1][1])/2;
		if (m[1][2]%2 == 0)
			g += b;
			
		if (d>g)
			cout << "Dabriel" << endl;
		else if (d == g)
			cout << "Empate" << endl;
		else
			cout << "Guarte" << endl;
	}
	
	return 0;
}
