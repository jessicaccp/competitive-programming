#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b;
	
	cin >> a;
	while (a--) {
		cin >> b;
		if (b%2==0)
			cout << b << " is even\n";
		else
			cout << b << " is odd\n";
	}
	
	return 0;
}
