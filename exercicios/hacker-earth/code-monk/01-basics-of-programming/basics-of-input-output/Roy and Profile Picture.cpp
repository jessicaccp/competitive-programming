#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int l, n, w, h;
	
	cin >> l >> n;
	while (n--) {
		cin >> w >> h;
		
		if (w<l or h<l)
			cout << "UPLOAD ANOTHER\n";
		else if (w==h)
			cout << "ACCEPTED\n";
		else
			cout << "CROP IT\n";
	}
	
	return 0;
}
