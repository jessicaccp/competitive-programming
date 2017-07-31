#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, c, d;
	
	while (cin >> a >> b >> c) {
		int e = 0;
		
		while (a--) {
			cin >> d;
			
			if (d>=b and d<=c)
				e++;
		}
		
		cout << e << "\n";
	}
	
	return 0;
}
