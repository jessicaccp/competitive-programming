#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, maior;
	string s, b;
	vector<string> v;
	bool aux = false;
	
	while (cin >> n and n) {
		if (aux)
			cout << "\n";
		else
			aux = true;
			
		cin.ignore();
		v.clear();
		maior = 0;
		
		while (n--) {			
			getline(cin, s);
			b = "";
			
			if (s[s.length()-1] == ' ')
				while (s[s.length()-1] == ' ')
					s.resize(s.length()-1);
			
			if (s[0] == ' ') {
				reverse(s.begin(), s.end());
				while (s[s.length()-1] == ' ')
					s.resize(s.length()-1);
				reverse(s.begin(), s.end());
			}
			
			for (int i=0; i<s.length(); i++)
				if ((i == s.length()-1) or (!(s[i] == ' ' and s[i+1] == ' ')))
					b += s[i];
					
			v.push_back(b);
			if (b.length() > maior)
				maior = b.length();
		}
		
		for (int i=0; i<v.size(); i++)
			cout << setw(maior) << v[i] << "\n";
	}
	
	return 0;
}
