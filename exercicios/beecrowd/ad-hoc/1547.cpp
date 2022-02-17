#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, qt, s, p, pos, num;
	
	cin >> n;
	while (n--) {
		cin >> qt >> s;
		
		for (int i=1; i<=qt; i++) {
			cin >> num;
			
			if ((num == s and p != num) or (i == 1) or ((max(num, s) - min(num, s)) < (max(p, s) - min(p, s)))) {
				p = num;
				pos = i;
			}
		}
		
		cout << pos << "\n";
	}

	return 0;
}
