#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, x, menor;
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cin >> x;
		if (i==0 or x<menor)
			menor = x;
	}
	
	cout << menor << "\n";
	
	return 0;
}
