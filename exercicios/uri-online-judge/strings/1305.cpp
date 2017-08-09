#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b;
	string::size_type sz;
	double c, d;
	
	while (cin >> a >> b) {
		if (a[0] == '.')
			a = '0' + a;
		else if (a[a.length()-1] == '.')
			a = a + '0';
			
		c = stod(a, &sz);
		d = stod(b, &sz);
		
		if (c-(long long)c >= d)
			cout << (long long)c+1 << "\n";
		else
			cout << (long long)c << "\n";
	}
			
	return 0;
}
