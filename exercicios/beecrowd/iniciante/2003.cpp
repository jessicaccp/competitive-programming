#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int a, c, at;
	char b;

	while (cin >> a >> b >> c) {	
		if (a<7)
			at = 0;
		else if (a == 7)
			at = c;
		else
			at = 60*(a-7)+c;
		
		cout << "Atraso maximo: " << at << "\n";
	}

	return 0;
}
