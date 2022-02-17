#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, c, d;
	
	while (cin >> a >> b) {
		int e = 0;
		
		while (a--) {
			cin >> c >> d;
			
			if (c==b and d==0)
				e++;
		}
		
		cout << e << "\n";
	}
	
	return 0;
}
