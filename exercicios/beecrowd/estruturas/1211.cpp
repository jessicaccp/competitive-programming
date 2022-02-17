#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a;
	bool aux;
	
	while (cin >> a) {
		cin.ignore();
		vector<string> v(a);
		int count = 0;
		
		for (string &i : v)
			cin >> i;
		
		sort(v.begin(), v.end());

		int tam = v[0].size();
		
		for (int i=(a-1); i>0; i--) {
			for (int j=0; j<tam; j++) {
				if (j==0)
					aux = true;
				if (v[i][j] == v[i-1][j] and aux==true)
					count++;
				else
					aux = false;
			}
		}
		cout << count << "\n";
	}
	
	return 0;
}
