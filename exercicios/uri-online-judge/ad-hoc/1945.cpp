#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	pair<string, int> p[2004];
	string a, b, c, d;
	bool um, dois;
	int cont=0;
	
	while (getline(cin, a)) {
		b = c = d = "";
		um = true; dois = false;
	
		for (int i=0; i<a.length(); i++) {
			if (um)
				if (a[i] == ' ') {
					um = false;
					dois = true;
					i += 3;
				}
				else
					b += a[i];
			else if (dois) {
				if (a[i] >= '0' and a[i] <= '9')
					c += a[i];
				else
					if (a[i] == ' ') {
						dois = false;
						i += 2;
					}
					else
						c += a[i];
			}
			else
				d += a[i];
		}
		
		if (dois) {
			p[cont].first = b;
			p[cont].second = stoi(c, nullptr, 10);
			cont++;
		}
		else {
			p[cont].first = b;
			for (int i=0; i<cont; i++)
				if (p[i].first == c)
					p[cont].second += p[i].second;
				else if (p[i].first == d)
					p[cont].second += p[i].second;
			cont++;
		}
	}
	
	cout << p[cont-1].second << "\n";
		
	return 0;
}
