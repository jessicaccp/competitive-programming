#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int n, b;
	string a;
	
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a == "Thor")
			cout << "Y\n";
		else
			cout << "N\n";
	}

	return 0;
}
