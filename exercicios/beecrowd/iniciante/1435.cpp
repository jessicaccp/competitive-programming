#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false); //cin.tie(nullptr);

	int n;
	while (cin >> n and n) {
		int m[n][n], maior=0;
		
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=n; j++) {
				if ((i<=n/2 and j<=n/2 and n%2==0) or ((i-1)<=n/2 and (j-1)<=n/2 and n%2!=0))
					if (i<j)
						m[i-1][j-1] = i;
					else
						m[i-1][j-1] = j;
				else
					if ((j>n/2 and n%2==0) or ((j-1)>n/2 and n%2!=0))
						m[i-1][j-1] = m[i-1][n-j];
					else
						m[i-1][j-1] = m[n-i][j-1];
				
				if (j==1)
					cout << setw(3) << m[i-1][j-1];
				else
					cout << setw(4) << m[i-1][j-1];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	return 0;
}
