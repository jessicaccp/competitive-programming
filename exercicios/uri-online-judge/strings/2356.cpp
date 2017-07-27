#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b;
	while (cin >> a >> b) {
		int found = a.find(b);
		if (found != string::npos)
			cout << "Resistente\n";
		else
			cout << "Nao resistente\n";
	}
	
	return 0;
}
