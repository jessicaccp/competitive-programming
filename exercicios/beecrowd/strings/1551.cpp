#include<bits/stdc++.h>

using namespace std;

int alf[27];

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, aux =0;
	string a;
	
	cin >> n;
	cin.ignore();
	
	while (n--) {
		getline(cin, a);
		
		for (int i=0; i<a.size(); i++)
			if (isalpha(a[i])) {
				if (alf[a[i]-'a'] == 0)
					aux++;
				alf[a[i]-'a'] = 1;
			}
		
		if (aux == 26)
			cout << "frase completa\n";
		else if (aux >= 13)
			cout << "frase quase completa\n";
		else
			cout << "frase mal elaborada\n";
			
		memset(alf, 0, sizeof(alf));
		aux = 0;
	}

	return 0;
}
