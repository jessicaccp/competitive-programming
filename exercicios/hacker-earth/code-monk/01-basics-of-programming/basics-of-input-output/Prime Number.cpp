#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	for (int i=2; i<=n; i++)
		for (int j=1; j<=i/2; j++)
			if (i%j == 0 and j>1)
				break;
			else if (j == i/2)
				cout << i << " ";
	
	return 0;
}
