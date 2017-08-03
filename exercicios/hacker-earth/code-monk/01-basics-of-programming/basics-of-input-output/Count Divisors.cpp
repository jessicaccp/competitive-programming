#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int l, r, k, c=0;
	
	cin >> l >> r >> k;
	
	for (int i=min(l, r); i<=max(l, r); i++)
		if (i%k == 0)
			c++;
			
	cout << c << "\n";
	
	return 0;
}
