#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, v[6], b[6];
	bool aux;
	
	cin >> n;
	while (n--) {
		memset(b, 0, sizeof(b));
		aux = true;
		
		for (int i=0; i<6; i++) {
			cin >> v[i];
			if (v[i] >=1 and v[i] <= 6)
				b[v[i]-1] = 1;
			else
				aux = false;
		}
		
		if (aux)
			for (int i=0; i<6; i++)
				if (b[i] == 0)
					aux = false;
	
		if (aux and v[0]+v[5] == 7 and v[1]+v[3] == 7 and v[2]+v[4] == 7)
			cout << "SIM\n";
		else
			cout << "NAO\n";
	}
	
	return 0;
}
