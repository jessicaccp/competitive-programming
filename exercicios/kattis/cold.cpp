#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, soma=0;
	
	cin >> a;
	
	while (a--) {
		cin >> b;
		if (b<0)
			soma++;
	}
	
	cout << soma;
	
	return 0;
}
