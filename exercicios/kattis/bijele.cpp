#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	int a[] = {1, 1, 2, 2, 2, 8}, b;
	
	for (int i=0; i<6; i++) {
		cin >> b;
		a[i] -= b;
		cout << a[i] << " ";
	}
	
	return 0;
}
