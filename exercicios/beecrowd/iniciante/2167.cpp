#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, x, s, ant;
	bool aux = true;
	
	cin >> n;
	
	for (int i=1; i<=n; i++) {
		cin >> x;
		
		if (i == 1)
			s = 0;
		else if (aux and ant>x) {
			s = i;
			aux = false;
		}
		
		ant = x;
	}
	
	cout << s << "\n";
	
	return 0;
}
