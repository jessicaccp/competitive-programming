#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, s, a, menor;
	
	cin >> n >> s;
	menor = s;
	
	while (n--) {
		cin >> a;
		s += a;
		if (s<menor)
			menor = s;
	}
	
	cout << menor << "\n";
	
	return 0;
}
