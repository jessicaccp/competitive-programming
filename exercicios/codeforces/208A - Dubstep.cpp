#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a;
	
	getline(cin, a);
	int tam = a.size();
	
	for (int i=0; i<tam-2; i++) {
		if (a[i]=='W' and a[i+1]=='U' and a[i+2]=='B') {
			a.erase(i, 3);
			tam -= 3;
			
			if (i!=0 and i!=tam and a[i-1]!=' ') {
				a.insert(a.begin()+i, ' ');
				tam++;
			}
			
			i--;
		}
	}
	
	cout << a << "\n";
	
	return 0;
}
