#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, k;
	string a, b;
	bool aux;
	
	cin >> n;
	
	while (n--) {
		cin >> k;
		cin.ignore();
		
		for (int i=0; i<k; i++) {
			getline(cin, a);
			
			if (i==0) {
				b = a;
				aux = true;
			}
			else if (a != b)
				aux = false;
		}
		
		if (aux)
			cout << a << "\n";
		else
			cout << "ingles\n";
	}

	return 0;
}
