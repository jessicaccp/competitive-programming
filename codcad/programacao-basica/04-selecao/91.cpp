#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int h, p, f, d;
	
	cin >> h >> p >> f >> d;
	
	if (d == 1) {
		if ((f<h && h<p) || (h<p && p<f) || (p<f && f<h))
			cout << "S\n";
		else
			cout << "N\n";
	}
	else {
		if ((f>h && h>p) || (p>f && f>h) || (h>p && p>f))
			cout << "S\n";
		else
			cout << "N\n";
	}
	
	return 0;
}
