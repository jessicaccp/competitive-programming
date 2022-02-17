#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	string a, b="", c="", d="";
	int bb, cc, dd;
	bool um, dois, tres;
	
	while (getline(cin, a)) {
		if (a == "0+0=0") {
			cout << "True\n";
			return 0;
		}	

		um = true; dois = tres = false;
	
		for (int i=0; i<a.size(); i++) {
			if (a[i] == '+')
				um = false, dois = true;
			else if (a[i] == '=')
				dois = false, tres = true;
			else if (um)
				b += a[i];
			else if (dois)
				c += a[i];
			else
				d += a[i];
		}
	
		reverse(b.begin(), b.end());
		reverse(c.begin(), c.end());
		reverse(d.begin(), d.end());
	
		bb = stoi(b, nullptr, 10);
		cc = stoi(c, nullptr, 10);
		dd = stoi(d, nullptr, 10);
	
		if (bb+cc == dd)
			cout << "True\n";
		else
			cout << "False\n";
			
		b = c = d = "";
	}

	return 0;
}
