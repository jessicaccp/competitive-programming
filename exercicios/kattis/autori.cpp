#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
	string a, b;
	
	getline(cin, a);
	b = a[0];
  
	for (int i=2; i<a.size(); i++)
		if (a[i-1] == '-')
			b += a[i];
		
	cout << b;
	
	return 0;
}
