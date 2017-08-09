#include<bits/stdc++.h>
using namespace std;

unsigned long long v[205];
int maior =0;

int main () {
	ios_base::sync_with_stdio(false);

	unsigned long long n, caso=0;
	string s[205];
	
	v[0] = 1;
	s[0] = "0";
	
	while (cin >> n) {
		cout << "Caso " << ++caso << ": ";
		
		if (v[n]) {
			cout << v[n];
			if (v[n] > 1)
				cout << " numeros\n";
			else
				cout << " numero\n";
		}
		else {
			for (int i=maior+1; i<=n; i++) {
				v[i] = v[i-1]+i;
				s[i] = s[i-1];
				for (int j=0; j<i; j++)
					s[i] += " " + to_string(i);
			}
			
			maior = n;
			
			cout << v[n];
			if (v[n] > 1)
				cout << " numeros\n";
			else
				cout << " numero\n";
		}
		cout << s[n] << "\n\n";
	}

	return 0;
}
