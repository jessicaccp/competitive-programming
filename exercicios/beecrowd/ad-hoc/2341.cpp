#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, k, x, menor;
	cin >> n >> k;
	int v[k];
	
	memset(v, 0, sizeof(v));
	
	for (int i=0; i<n; i++) {
		cin >> x;
		v[x-1]++;
	}
	
	for (int i=0; i<k; i++)
		if (i==0 or v[i]<menor)
			menor = v[i];
	
	cout << menor << "\n";
	
	return 0;
}
