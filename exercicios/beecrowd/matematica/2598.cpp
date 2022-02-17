#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
    
	long long int n, a, b, r;
	cin >> n;
	
	while (n--) {
		cin >> a >> b;
		r = a/b;
		if (a%b != 0)
			r++;
		cout << r << "\n";
	}
	
	return 0;
}
