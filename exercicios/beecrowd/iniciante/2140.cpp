#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, v[] = {2, 5, 10, 20, 50, 100};
	
	while (cin >> a >> b and (a or b)) {
		b = b-a;
		bool aux = false;
		
		for (int i=0; i<6; i++)
			for (int j=0; j<6; j++)
				if (b-v[i]-v[j]==0)
					aux = true;
		
		if (aux)
			cout << "possible\n";
		else
			cout << "impossible\n";
	}
	
	return 0;
}
