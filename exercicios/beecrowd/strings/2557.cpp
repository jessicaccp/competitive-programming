#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a, b, c, d;
	int p, s, t;
	bool pr, se;
	
	while (getline(cin, a)) {
		b = c = d = "";
		pr = true; se = false;
		
		for (int i=0; i<a.size(); i++)
			if (pr)
				if (a[i] == '+') {
					pr = false;
					se = true;
				}
				else
					b += a[i];
			else if (se)
				if (a[i] == '=')
					se = false;
				else
					c += a[i];
			else
				d += a[i];
				
		if (b[0] >= '0' and b[0] <= '9')
			p = stoi(b, nullptr, 10);
		else
			p = 0;
		if (c[0] >= '0' and c[0] <= '9')
			s = stoi(c, nullptr, 10);
		else
			s = 0;
		if (d[0] >= '0' and d[0] <= '9')
			t = stoi(d, nullptr, 10);
		else
			t = 0;
			
		if (p == 0)
			cout << t-s << "\n";
		else if (s == 0)
			cout << t-p << "\n";	
		else if (t == 0)
			cout << p+s << "\n";
	}
	
	return 0;
}
