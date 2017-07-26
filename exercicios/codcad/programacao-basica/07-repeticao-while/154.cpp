#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, maior = 0;
	
	while (1) {
		cin >> a;
		
		if (a==0)
			break;
		
		if (a>maior)
			maior = a;
	}
	
	cout << maior << "\n";
	
	return 0;
}
