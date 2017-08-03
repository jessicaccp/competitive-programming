#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	bool aux = true;
	
	while (cin >> n) {
		if (n == 42)
			aux = false;
			
		if (aux)
			cout << n << "\n";
	}
	
	return 0;
}
