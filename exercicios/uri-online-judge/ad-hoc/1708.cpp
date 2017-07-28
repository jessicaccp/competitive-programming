#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int a, b, v=1;
	
	cin >> a >> b;
	
	while (1) {
		v++;
		
		if (a*v <= b*(v-1)) {
			cout << v << "\n";
			break;
		}
	}		
	
	return 0;
}
