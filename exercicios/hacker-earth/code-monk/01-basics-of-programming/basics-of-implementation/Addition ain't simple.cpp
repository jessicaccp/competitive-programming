#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	string a, b;
	
	cin >> n;
	cin.ignore();
	
	while (n--) {
		getline(cin, a);
		b = a;
		reverse(a.begin(), a.end());
		
		for (int i=0; i<a.length(); i++) {
			if (b[i]+a[i]-'a'+1 > 'z')
				b[i] = b[i]+a[i]-25-'a';
			else
				b[i] = b[i]+a[i]-'a'+1;
		}
			
		cout << b << "\n";
	}
	
	return 0;
}
