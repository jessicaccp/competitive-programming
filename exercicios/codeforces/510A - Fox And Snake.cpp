#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false); //cin.tie(nullptr);

	int a, b;
	cin >> a >> b;
	
	for (int i=0; i<a; i++) {
		for (int j=0; j<b; j++)
			if (i%2==0)
				cout << "#";
			else
				if ((i+1)%4==0) {
					if (j==0)
						cout << "#";
					else
						cout << ".";
				}
				else
					if (j==b-1)
						cout << "#";
					else
						cout << ".";
		cout << "\n";
	}
	
	return 0;
}
