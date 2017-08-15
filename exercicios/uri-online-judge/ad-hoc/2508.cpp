#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string s;
	int soma, v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, l;
	
	while (getline(cin, s)) {
		soma = 0;
		
		for (int i=0; i<s.length(); i++) {
			if (isalpha(s[i])) {
				if (isupper(s[i]))
					l = s[i]-'A'+1;
				else
					l = s[i]-'a'+1;
				
				while (l > 9)
					l -= 9;
			
				soma += l;
			}
		}
		
		while (soma > 9) {
			int r = soma%10;
			soma /= 10;
			soma += r;
		}
			
		cout << soma << "\n";
	}
			
	return 0;
}
