#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int n, a, ant=0, seq=0, maior=0;
	cin >> n;
	
	for (long long int i=0; i<n; i++) {
		cin >> a;
		if (ant == a or i == 0)
			seq++;
		else
			seq = 1;
		
		if (seq > maior)
			maior = seq;
		
		ant = a;
	}
	
	cout << maior << "\n";
	
	return 0;
}
