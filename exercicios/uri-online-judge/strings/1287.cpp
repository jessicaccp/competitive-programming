#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b;
	long long int c;
	
	while (getline(cin, a)) {
		string b = "";
		
		for (int i=0; i<a.length(); i++)
			if (isdigit(a[i]))
				b += a[i];
			else if (a[i] == 'O' or a[i] == 'o')
				b += "0";
			else if (a[i] == 'l')
				b += "1";
			else if (isalpha(a[i])) {
				b = "error";
				break;
			}
		
		if (b[0] == '0') {
			reverse(b.begin(), b.end());
			while (b[b.length()-1] == '0' and b.length() != 1)
				b.resize(b.length()-1);
			reverse(b.begin(), b.end());
		}
		
		if (b.length() > 10 or b=="")
			b = "error";
		else if (b.length() == 10) {
			c = stoll(b, nullptr, 10);
			if (c > 2147483647)
				b = "error";
		}
		if (b != "error")
			cout << stoll(b, nullptr, 10) << "\n";
		else
			cout << b << "\n";
			
	}
			
	return 0;
}
