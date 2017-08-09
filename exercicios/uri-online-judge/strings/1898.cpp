#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b, c="", d="";
	string::size_type sz;
	double e;
	int cont;
	bool aux;
	
	getline(cin, a);
	getline(cin, b);
	
	cont = 0; aux = false;
	for (int i=0; i<a.length(); i++)
		if ((isdigit(a[i]) or a[i]=='.') and cont<3) {
			if (a[i]=='.')
				aux = true;
			if (aux)
				cont++;
			c += a[i];
		}
	
	cont = 0; aux = false;
	for (int i=0; i<b.length(); i++)
		if ((isdigit(b[i]) or b[i]=='.') and cont<3) {
			if (b[i]=='.')
				aux = true;
			if (aux)
				cont++;
			d += b[i];
		}
			
	a = c;
	a.resize(11);
	reverse(c.begin(), c.end());
	c.resize(c.length()-11);
	reverse(c.begin(), c.end());
	
	cout << "cpf " << a << "\n";
	cout << fixed << setprecision(2) << stod(c, &sz)+stod(d, &sz) << "\n";
			
	return 0;
}
