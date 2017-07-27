#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int a;
	string b;
	
	cin >> a;
	while (a--) {
		cin >> b;
		if (b.size() == 3 && b[0]=='O' && b[1]=='B')
			cout << "OBI";
		else
			if (b.size() == 3 && b[0]=='U' && b[1]=='R')
				cout << "URI";
			else
				cout << b;
		
		if (a)
			cout << " ";
		else
			cout << "\n";
	}
	
	return 0;
}
