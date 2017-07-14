#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, l, c, soma=0;
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> l >> c;
		if (l>c)
			soma += c;
	}
	
	cout << soma << "\n";
	
	return 0;
}
