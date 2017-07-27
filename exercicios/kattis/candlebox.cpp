#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int d, r, t, soma=0, ri=4, th=3, somar=0, somat=0;
	
	cin >> d >> r >> t;
	
	while (1) {
		somar += ri;
		if (ri-d >= 3)
			somat += th;
			
		if (somar+somat >= r+t)
			break;
		else {
			ri++;
			if (ri-d-1 >= 3)
				th++;
		}
	}	
	
	cout << r-somar << "\n";
	
	return 0;
}
