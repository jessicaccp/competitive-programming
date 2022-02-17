#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a;
	while (a--) {
		cin >> b;
		while (b--) {
			cin >> c;
			if (c==1)
				cout << "Rolien\n";
			else if (c==2)
				cout << "Naej\n";
			else if (c == 3)
				cout << "Elehcim\n";
			else
				cout << "Odranoel\n";
		}
	}

	return 0;
}
