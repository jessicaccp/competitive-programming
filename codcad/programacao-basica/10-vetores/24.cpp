#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, esq = 0, dir=0;
	cin >> n;
	int v[n];
	
	for (int i=0; i<n; i++) {
		cin >> v[i];
		dir += v[i];
	}
	
	int i = 0;
	while (esq < dir) {
		esq += v[i];
		dir -= v[i];
		i++;
	}
	
	cout << i << "\n";
	
	return 0;
}
