#include<bits/stdc++.h>
using namespace std;

int main () {
	//ios_base::sync_with_stdio(false);

	int t, a, c;
	char b;
	string d="", s;
	
	while (cin >> t) {
		s = d = "";
		while (t--) {
			cin >> a >> b >> c;
			
			if (d!="")
				cout << " " << d << " ";
			else
				cout << d;
			
			if (t)
				cin >> d;
				
			cout << a*c << b;
			
			if (c>2)
				cout << c-1;
		}
		cout << "\n";
	}
			
	return 0;
}
