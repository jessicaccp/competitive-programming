#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a;
	long long int b;
	
	cin >> a;
	while (a--) {
		cin >> b;
		
		if (b<2015)
			cout << 2015-b << " D.C.\n";
		else
			cout << b-2014 << " A.C.\n";
	}
	
	return 0;
}
