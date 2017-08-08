#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int p, j1, j2, r, a;
	
	cin >> p >> j1 >> j2 >> r >> a;
	
	if (a and r)
		cout << "Jogador 2 ganha!\n";
	else if (a and !r)
		cout << "Jogador 1 ganha!\n";
	else if (p)
		if ((j1+j2)%2==0 or r)
			cout << "Jogador 1 ganha!\n";
		else
			cout << "Jogador 2 ganha!\n";
	else
		if ((j1+j2)%2!=0 or r)
			cout << "Jogador 1 ganha!\n";
		else
			cout << "Jogador 2 ganha!\n";
	
	return 0;
}
