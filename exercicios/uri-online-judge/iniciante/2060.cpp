#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int n, x, m2=0, m3=0, m4=0, m5=0;
	cin >> n;
	
	while (n--) {
		cin >> x;
		if (x%2 == 0)
			m2++;
		if (x%3 == 0)
			m3++;
		if (x%4 == 0)
			m4++;
		if (x%5 == 0)
			m5++;
	}
	
	cout << m2 << " Multiplo(s) de 2\n" << m3 << " Multiplo(s) de 3\n" << m4 << " Multiplo(s) de 4\n" << m5 << " Multiplo(s) de 5\n" ;

	return 0;
}
