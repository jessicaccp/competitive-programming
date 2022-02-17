#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, k;
	
	while (cin >> n) {
		k = n-1;
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (j==k)
					cout << 2;
				else
					if (i==j)
						cout << 1;
					else
						cout << 3;
			}
			k--;
			cout << "\n";
		}
	}

	return 0;
}
