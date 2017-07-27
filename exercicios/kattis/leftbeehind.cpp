#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int x, y;
	
	while (cin >> x >> y and (x or y)) { //sweet, sour
		if (x+y == 13)
			cout << "Never speak again.\n";
		else if (x<y)
			cout << "Left beehind.\n";
		else if (x>y)
			cout << "To the convention.\n";
		else
			cout << "Undecided.\n";
	}
	
	return 0;
}
