#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	string a, fav;
	
	while (cin >> n and n) {
		int maior = -1;
		
		for (int i=0; i<n; i++) {
			int dv = 0;
			cin >> a;
			
			for (int j=0; j<a.size()-1; j++)
				if ((a[j] == 'a' or a[j] == 'e' or a[j] == 'i' or a[j] == 'o' or a[j] == 'u' or a[j] == 'y') and (a[j] == a[j+1]))
					dv++;
				
			if (dv > maior) {
				maior = dv;
				fav = a;
			}
		}
		
		cout << fav << "\n";
	}
	
	return 0;
}
