#include<bits/stdc++.h>

using namespace std;

int v[505];

int main () {
	ios_base::sync_with_stdio(false);

	string a, b;
	long long int sa, sb;
	
	while (cin >> a >> b) {
		if (a == "0" and b == "0")
			return 0;
			
		sa = sb = 0;
		
		if (a.size() == 1)
			sa += a[0]-'0';
		if (b.size() == 1)
			sb += b[0]-'0';
			
		while (a.size() > 1) {
			for (int i=0; i<a.size(); i++)
				sa += a[i]-'0';
				
			a = to_string(sa);
			
			if (a.size() > 1)
				sa = 0;
		}
				
		while (b.size() > 1) {
			for (int i=0; i<b.size(); i++)
				sb += b[i]-'0';

			b = to_string(sb);
			
			if (b.size() > 1)
				sb = 0;
		}
		
		if (sa > sb)
			cout << 1 << "\n";
		else if (sa == sb)
			cout << 0 << "\n";
		else
			cout << 2 << "\n";
	}

	return 0;
}
