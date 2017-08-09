#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string s;
	
	while (getline(cin, s)) {
		bool r = true, ma, mi, num;
		ma = mi = num = false;
	
		if (s.length()<6 or s.length()>32)
			r = false;
		else {
			for (int i=0; i<s.length(); i++) {
				if (isupper(s[i]))
					ma = true;
				else if (islower(s[i]))
					mi = true;
				else if (isdigit(s[i]))
					num = true;
				else {
					r = false;
					break;
				}
			}
		}
		
		if (ma and mi and num and r)
			cout << "Senha valida.\n";
		else
			cout << "Senha invalida.\n"; 
	}

	return 0;
}
