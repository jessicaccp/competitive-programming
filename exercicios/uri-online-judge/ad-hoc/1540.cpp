#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int t, a, b, c, d, e, f;
		
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;
		
		cout << fixed << setprecision(2);
		if (a<c) {
			e = ((d-b)/(c-a));
			f = ((d-b)%(c-a))*100;
			f = f/(c-a);
		}
		else {
			e = (int)((b-d)/(a-c));
			f = ((b-d)%(a-c))*100;
			f = f/(a-c);
		}
			
		cout << e << "," << f;
		
		if (f == 0)
			cout << 0;
			
		cout << "\n";
	}
			
	return 0;
}
