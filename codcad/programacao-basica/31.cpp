#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, soma=0;
	char b;
	
	cin >> a;
	while (a--) {
		cin >> b;
		
		if (b == 'P')
			soma += 2;
		else
			if (b == 'C')
				soma += 2;
			else
				if (b == 'A')
					soma += 1;
	}
	
	cout << soma << "\n";
	
	return 0;
}
