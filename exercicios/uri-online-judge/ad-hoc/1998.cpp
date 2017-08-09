#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, zeros;
	
	while (cin >> n) {
		if (n == -1)
			return 0;
			
		int v[n];
		zeros = 0;
		
		for (int i=0; i<n; i++)	{
			cin >> v[i];
			if (v[i] == 0)
				zeros++;
		}
		
		bool aux = true;
		while (aux) {			
			zeros = 0;
			for (int i=0; i<n; i++) {
				if (v[i] == 0)
					zeros++;
				else if (v[i] == i+1) {
					v[i] = 0;
					for (int j=0; j<i; j++)
						v[j]++;
					break;
				}
				
				if (i == n-1) {
					aux = false;
					break;
				}
			}
		}
		
		if (zeros == n)
			cout << "S\n";
		else
			cout << "N\n";	
	}

	return 0;
}
