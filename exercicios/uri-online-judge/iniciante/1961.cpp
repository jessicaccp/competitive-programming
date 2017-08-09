#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int p, n, x, ant;
	bool aux = true;
	
	cin >> p >> n;
	for (int i=0; i<n; i++) {
		cin >> x;
		
		if (i==0)
			ant = x;
		
		if (max(x, ant)-min(x, ant) > p)
			aux = false;
		
		ant = x;
	}
	
	if (aux)
		cout << "YOU WIN\n";
	else
		cout << "GAME OVER\n";
	
	return 0;
}
