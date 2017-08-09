#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	
	while (cin >> n) {
		cout << (long long int)(log2(n)) << "\n";
	}
	
	return 0;
}
