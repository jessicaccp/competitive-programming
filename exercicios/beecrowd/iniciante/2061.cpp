#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
    
	int a, b;
	string c;
	
	cin >> a >> b;
	
	while (b--) {
		cin >> c;
		if (c == "fechou")
			a++;
		else if (c == "clicou")
			a--;
	}
	
	cout << a << "\n";
	
	return 0;
}
