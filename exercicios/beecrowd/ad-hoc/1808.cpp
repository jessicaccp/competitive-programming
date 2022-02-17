#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string s;
	int num=0, soma=0;
	
	getline(cin, s);
	for (int i=0; i<s.length(); i++)
		if (i+1<s.length() and s[i] == '1' and s[i+1] == '0') {
			soma += 10;
			num++;
			i++;
		}
		else {
			num++;
			soma += s[i]-'0';
		}
		
	cout << fixed << setprecision(2) << (double)(soma)/(double)(num) << "\n";

	return 0;
}
