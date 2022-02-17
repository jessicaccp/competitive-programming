#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b;
	
	cin >> a >> b;
	
	if (b<a and b<=96 and b>=3)
		cout << "minguante\n";
	else if (b>=0 and b<=2)
		cout << "nova\n";
	else if (b>=3 and b<=96)
		cout << "crescente\n";
	else
		cout << "cheia\n";
		
	return 0;
}
