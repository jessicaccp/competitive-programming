#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int q, z=0, u=0, v;
	cin >> q;
	
	for (int i=0; i<q; i++) {
		cin >> v;
		if (v)
			u++;
		else
			z++;
	}
	
	if (z>u)
		cout << "Y\n";
	else
		cout << "N\n";

	return 0;
}
