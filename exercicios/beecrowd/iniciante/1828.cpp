#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
    
	string a[] = {"tesoura", "papel", "pedra", "lagarto", "Spock", "tesoura", "lagarto", "papel", "Spock", "pedra", "tesoura"}, b, c;
	int n, casos=0;
	
	cin >> n;
	while (n--) {
		cin >> b >> c;
		
		if (b == c)
			cout << "Caso #" << ++casos << ": De novo!\n";
		else
			for (int i=0; i<10; i++)
				if (b == a[i] and c == a[i+1]) {
					cout << "Caso #" << ++casos << ": Bazinga!\n";
					break;
				}
				else if (c == a[i] and b == a[i+1]) {
					cout << "Caso #" << ++casos << ": Raj trapaceou!\n";
					break;
				}
	}
	
	return 0;
}
