#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int h1, m1, h2, m2;
	
	while (1) {
		cin >> h1 >> m1 >> h2 >> m2;
		
		if (h1 == m1 && m1 == h2 && h2 == m2 && m2 == 0)
			break;
		
		if (h1<h2)
			if (m1<=m2)
				cout << m2-m1+(h2-h1)*60 << "\n";
			else
				cout << 60-m1+m2+(h2-h1-1)*60 << "\n";
		else
			if (h1>h2)
				if (m1<=m2)
					cout << (24-h1+h2)*60+m2-m1 << "\n";
				else
					cout << (23-h1+h2)*60+60-m1+m2 << "\n";
			else
				if (m1<=m2)
					cout << m2-m1 << "\n";
				else
					cout << 23*60+60-m1+m2 << "\n";
	}
	
	return 0;
}
