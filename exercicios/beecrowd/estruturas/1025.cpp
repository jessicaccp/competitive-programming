#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int a, b, aux =0, c;
	while (cin >> a >> b and a and b) {
		int v[a];
		for (int i=0; i<a; i++)
			cin >> v[i];
			
		sort(v, v+a);
		
		cout << "CASE# " << ++aux << ":\n";
		for (int i=0; i<b; i++) {
			cin >> c;
			for (int i=0; i<a; i++)
				if (c == v[i]) {
					cout << c << " found at " << i+1 << "\n";
					break;
				}
				else if (i == a-1)
					cout << c << " not found\n";
		}
	}

	return 0;
}
