#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	double o, b, i;
	
	cin >> o >> b >> i;
	
	if (o == b or o == i or b == i)
		cout << "Empate\n";
	else if (o<b and o<i)
		cout << "Otavio\n";
	else if (b<o and b<i)
		cout << "Bruno\n";
	else
		cout << "Ian\n";
			
	return 0;
}
