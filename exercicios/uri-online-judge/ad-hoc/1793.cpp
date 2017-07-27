#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, a, b=0, soma =0;
	while (cin >> n and n) {
		soma = b = 0;
		
		for (int i=0; i<n; i++) {
			cin >> a;
			soma += 10;
			if (i!=0 and a-b<10 and a-b>0)
				soma -= 10-(a-b);
			
			b = a;
		}
		
		cout << soma << "\n";
	}
	
	return 0;
}
