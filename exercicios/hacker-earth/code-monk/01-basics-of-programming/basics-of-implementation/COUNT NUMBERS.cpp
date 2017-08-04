#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, n, c;
	string s;
	bool aux;
	
	cin >> t;
	while (t--) {
		cin >> n;
		cin.ignore();
		getline(cin, s);
		
		c = 0; aux = false;
		for (int i=0; i<s.length(); i++)
			if (isdigit(s[i])) {
				if (!aux)
					c++;
				aux = true;
			}
			else
				aux = false;
				
		cout << c << "\n";
	}
	
	return 0;
}
