#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int a, b, div, res;
	
	while ((cin >> a >> b) and (a or b)) {
		div = a/b; res = a%b;
		cout << div << " " << res << " / " << b << "\n";
 	}
	
	return 0;
}
