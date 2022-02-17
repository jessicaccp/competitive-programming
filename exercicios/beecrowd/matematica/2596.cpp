#include<bits/stdc++.h>

using namespace std;

int f[1004];

int main () {
	ios_base::sync_with_stdio(false);

	int t, n, div, num, maior=1;
	cin >> t;
	
	while (t--) {
		cin >> n;
		num=0;
		
		if (f[n])
			cout << f[n] << "\n";
		else {
			for (int j=maior; j<=n; j++) {
				div = 1;
				f[j] = f[j-1];
			
				for (int i=1; i<=j/2; i++)
					if (j%i == 0)
						div++;
						
				if (div%2 == 0)
					f[j]++;
			}
		
			cout << f[n] << "\n";
		}
		
		if (n > maior)
			maior = n;
	}
			
	return 0;
}
