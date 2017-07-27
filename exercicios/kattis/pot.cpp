#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int n, r, x, soma=0;
	
	cin >> n;
	while (n--) {
		cin >> x;
		r = x%10;
		x /= 10;
		soma += pow(x, r);
	}
	
	cout << soma;
	
	return 0;
}
