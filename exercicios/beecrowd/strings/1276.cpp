#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b = "abcdefghijklmnopqrstuvwxyz", c;
	int alf[26];
	bool aux;
	
	while (getline(cin, a)) {
		memset(alf, 0, sizeof(alf));
		aux = false;
		c = "";
		
		for (int i=0; i<a.length(); i++)
			if (isalpha(a[i]))
				alf[a[i]-'a'] = 1;
				
		for (int i=0; i<26; i++)
			if (alf[i]) {
				if (! aux and i!=25) {
					if (c!="")
						c += ", ";
						
					c = c + b[i] + ":";
				}
				else if (i==25 and !aux) {
					if (c!="")
						c += ", ";
						
					c = c + b[i] + ":" + b[i];
				}
				else if (i==25)
					c += b[i];
					
				aux = true;
			}
			else {
				if (aux)
					c += b[i-1];
					
				aux = false;
			}
			
		cout << c << "\n";
	}
	
	return 0;
}
