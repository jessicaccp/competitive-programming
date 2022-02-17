#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, r, b;
	
	while (cin >> n >> r) {
		vector<int> a;
		
		for (int i=0; i<r; i++) {
			cin >> b;
			a.push_back(b);
		}
		
		if (n == r)
			cout << "*\n";
		else {		
			sort(a.begin(), a.end());
		
			int j=0;
			for (int i=1; i<=n; i++) {
				if (a[j] == i)
					j++;
				else
					cout << i << " ";
			}
			cout << "\n";
		}
		
		a.clear();
	}
	
	return 0;
}
