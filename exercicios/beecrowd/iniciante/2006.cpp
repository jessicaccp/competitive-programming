#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int a, x, m=0;
	cin >> a;
	for (int i=0; i<5; i++) {
		cin >> x;
		if (a == x)
			m++;
	}
	
	cout << m << "\n";

	return 0;
}
