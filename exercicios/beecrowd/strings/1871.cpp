#include<bits/stdc++.h>

using namespace std;

int alf[27];

int main () {
	ios_base::sync_with_stdio(false);
	
	unsigned long long int a, b;
	string c;
	
	while (cin >> a >> b and a and b) {
		c = to_string((a+b));
		int tam = c.size();
	
		for (int i=0; i<tam; i++)
			if (c[i] != '0')
				cout << c[i];
		cout << "\n";
	}

	return 0;
}
