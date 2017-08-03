#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int t, k, v[7];
	string s[7] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};
	
	cin >> t;
	while (t--) {
		cin >> k;
		
		long long ss = 0;
		for (int i=0; i<7; i++) {
			cin >> v[i];
			ss += v[i];
		}
		
		if (k%ss and k>ss)
			k = k%ss;
			
		long long soma=0, i=0;
		while (soma < k) {
			if (i==7)
				i=0;
				
			soma += v[i];	
			i++;
		}
		
		cout << s[i-1] << "\n";
	}
	
	return 0;
}
