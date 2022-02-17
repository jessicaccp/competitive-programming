#include<bits/stdc++.h>

using namespace std;

int main () {
	//ios_base::sync_with_stdio(false);
	
	double d;
	string a;
	bool m = false;
	
	cin >> a;
	
	if (a[0] == '-')
		m = true;
		
	d = stod(a, nullptr);
	
	if (!m)
		cout << "+";
		
	printf("%.4E\n", d);
		
	return 0;
}
