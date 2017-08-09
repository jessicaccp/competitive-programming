#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int t, h, m, o;
	
	cin >> t;
	while (t--) {
		cin >> h >> m >> o;
		
		if (h<10)
			cout << 0;
		cout << h << ":";
		if (m<10)
			cout << 0;
		cout << m << " - A porta ";
		if (o)
			cout << "abriu!\n";
		else
			cout << "fechou!\n";
	}

	return 0;
}
