#include<bits/stdc++.h>

using namespace std;

int v[10];

int main () {
	ios_base::sync_with_stdio(false);
	
	string s;
	
	getline(cin, s);
	for (int i=0; i<s.length(); i++)
		v[s[i]-'0']++;
		
	for (int i=0; i<10; i++)
		cout << i << " " << v[i] << "\n";
	
	return 0;
}
