#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int x;
	cin >> x;
	
	cout << (long long int)(pow(3, x)) << "\n";
	
	return 0;
}
