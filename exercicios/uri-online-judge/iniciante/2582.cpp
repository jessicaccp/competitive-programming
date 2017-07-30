#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string d[] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
	int n, a, b;
	
	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << d[a+b] << "\n";
	}
	
	return 0;
}
