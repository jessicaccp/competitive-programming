#include<bits/stdc++.h>

using namespace std;

int v[505];

int main () {
	ios_base::sync_with_stdio(false);

	int j, r, a, m, pos;
	cin >> j >> r;
	
	for (int i=0; i<r; i++)
		for (int k=0; k<j; k++) {
			cin >> a;
			v[k] += a;
			
			if ((i==0 and k==0) or v[k]>=m) {
				m = v[k];
				pos = k+1;
			}
		}
		
	cout << pos << "\n";
	

	return 0;
}
