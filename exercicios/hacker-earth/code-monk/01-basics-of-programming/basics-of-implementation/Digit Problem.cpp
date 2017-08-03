#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string s;
	int n, aux=0;
	
	cin >> s >> n;
	
	for (int i=0; i<s.length(); i++)
		if (aux == n)
			break;
		else if (s[i] != '9') {
			s[i] = '9';
			aux++;
		}
	
	cout << s << "\n";
	
	return 0;
}
