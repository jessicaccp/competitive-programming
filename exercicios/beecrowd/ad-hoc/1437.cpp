#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int a;
	char b;
	
	while (cin >> a and a) {
		char c = 'N';
		
		while (a--) {
			cin >> b;
			
			if (b == 'D')
				if (c == 'N')
					c = 'L';
				else if (c == 'L')
					c = 'S';
				else if (c == 'S')
					c = 'O';
				else
					c = 'N';
			else
				if (c == 'N')
					c = 'O';
				else if (c == 'L')
					c = 'N';
				else if (c == 'S')
					c = 'L';
				else
					c = 'S';
		}
		cout << c << "\n";

	}

	return 0;
}
