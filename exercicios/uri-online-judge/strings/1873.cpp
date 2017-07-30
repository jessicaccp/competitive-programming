#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	string a[] = {"tesoura", "papel", "pedra", "lagarto", "spock", "tesoura", "lagarto", "papel", "spock", "pedra", "tesoura"}, b, c;
	int n;
	
	cin >> n;
	while (n--) {
		cin >> b >> c;
		
		if (b == c)
			cout << "empate\n";
		else
			for (int i=0; i<10; i++)
				if (b == a[i] and c == a[i+1]) {
					cout << "rajesh\n";
					break;
				}
				else if (c == a[i] and b == a[i+1]) {
					cout << "sheldon\n";
					break;
				}
	}
	
	return 0;
}
