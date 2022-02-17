#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a;
	
	while (cin >> a) {
		for (int i=1; i<=a; i+=2) {
			cout << setw((a-i)/2+1);
			for (int j=1; j<=i; j++)
				cout << "*";
			cout << "\n";
		}
		for (int i=1; i<=3; i+=2) {
			cout << setw((a-i)/2+1);
			for (int j=1; j<=i; j++)
				cout << "*";
			cout << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}
