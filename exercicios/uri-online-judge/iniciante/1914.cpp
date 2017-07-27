#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int n, e, f;
	string a, b, c, d;
	
	cin >> n;
	while (n--) {
		cin >> a >> b >> c >> d >> e >> f;
		if ((e+f)%2 == 0)
			if (b == "PAR")
				cout << a << "\n";
			else
				cout << c << "\n";
		else
			if (b == "PAR")
				cout << c << "\n";
			else
				cout << a << "\n";
	}

	return 0;
}
