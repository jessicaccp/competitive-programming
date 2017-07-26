#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b;
	cin >> a;
	
	for (int i=0; i<a.size(); i++)
		if (a[i] != 'a' and a[i] != 'e' and a[i] != 'i' and a[i] != 'o' and a[i] != 'u')
			a.erase(a.begin()+i--);
			
	b = a;
	reverse(a.begin(), a.end());
	if (b == a)
		cout << "S\n";
	else
		cout << "N\n";

	return 0;
}
