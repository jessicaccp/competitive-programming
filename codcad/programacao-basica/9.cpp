#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false); //cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b;
	
	while (b--) {
		cin >> c;
		if (a+c > 100)
			a = 100;
		else
			if (a+c < 0)
				a = 0;
			else
				a += c;
	}
	
	cout << a << "\n";
	
	return 0;
}
