#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int cont=0;
	string a, b;
	
	while (cin >> a and a != "0") {
		cin >> b;
		
		if (cont>0)
			cout << "\n";
		
		cout << "Instancia " << ++cont << "\n";
		size_t c = b.find(a);
		if (c != string::npos)
			cout << "verdadeira\n";
		else
			cout << "falsa\n";
	}
			
	return 0;
}
