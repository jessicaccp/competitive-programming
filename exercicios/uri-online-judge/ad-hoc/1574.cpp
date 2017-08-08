#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, n, p, v[105];
	string a, b;
	
	cin >> t;
	while (t--) {
		cin >> n;
		p = 0;
		cin.ignore();
		for (int i=0; i<n; i++) {
			b = "";
			getline(cin, a);
			if (a == "LEFT") {
				v[i] = 1;
				p--;
			}
			else if (a == "RIGHT") {
				v[i] = 2;
				p++;
			}
			else {
				for (int i=8; i<a.length(); i++)
					b += a[i];
				v[i] = v[stoi(b, nullptr, 10)-1];
				if (v[i] == 1)
					p--;
				else if (v[i] == 2)
					p++;
			}
		}
		cout << p << "\n";
	}
	
	return 0;
}
