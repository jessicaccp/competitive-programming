#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false); //cin.tie(nullptr);

	string a, b;
	
	getline(cin, a);
	int tam = a.size();
	
	for (int i=0; i<tam; i++)
		if (!(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')) {
			a.erase(a.begin()+i);
			tam--;
			i--;
		}
	
	b = a;
	reverse(a.begin(), a.end());
	
	if (a == b)
		cout << "S\n";
	else
		cout << "N\n";
	
	return 0;
}
