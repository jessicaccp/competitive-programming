#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	string a, b="";
	int tam;

	while (getline(cin, a)) {
		tam = a.size();
	
		for (int i=0; i<a.size(); i++)
			if (i==0)
				b += a[i];
			else
				b = b + " " + a[i];
		
		while (tam--) {
			cout << b << "\n";
			b.resize(b.size()-2);
			b = " " + b;
		}
		cout << "\n";
		
		b = "";
	}

	return 0;
}
