#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int caw=0, soma=0;
	string a;
	
	while (caw<3) {
		getline(cin, a);
		if (a == "caw caw") {
			caw++;
			cout << soma << "\n";
			soma = 0;
		}
		else {
			if (a[0] == '*')
				soma += 4;
			if (a[1] == '*')
				soma += 2;
			if (a[2] == '*')
				soma += 1;
		}
	}

	return 0;
}
