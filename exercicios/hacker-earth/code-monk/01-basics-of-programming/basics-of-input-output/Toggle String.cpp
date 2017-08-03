#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string s;
	getline(cin, s);
	
	for (int i=0; i<s.length(); i++)
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
		else if (islower(s[i]))
			s[i] = toupper(s[i]);
	
	cout << s << "\n";
	
	return 0;
}
