#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	bool aux = true;
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if ((a<b and b>=c) or (a<b and b<c and (c-b)<(b-a)) or (a>b and b>c and (b-c)>=(a-b)) or (a==b and b>=c))
		aux = false;
		
	if (aux)
		cout << ":)\n";
	else
		cout << ":(\n";
	
	return 0;
}
