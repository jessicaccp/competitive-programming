#include<bits/stdc++.h>

using namespace std;

int ve[105], va[105];

int main () {
	ios_base::sync_with_stdio(false);

	long long int q, n, t, p, mt=0, i;
	cin >> q;
	
	while (q--) {
		cin >> n;
		
		while (n--) {
			cin >> t >> p;
			
			if (p>100 and (va[t] == 0 or va[t]<p))
				va[t] = p;
			else if (p<=100 and ve[t]<p)
				ve[t] = p;
				
			if (t > mt)
				mt = t;
		}
		
		long long int soma = 0;
		for (i=1; i<=mt; i++)
			if (va[i] == 0)
				soma += ve[i];
			else if (ve[i] < 10)
				soma += va[i];
			else
				soma += ve[i];
				
		cout << soma << "\n";
			
		memset(ve, 0, (mt+1)*sizeof(int));
		memset(va, 0, (mt+1)*sizeof(int));
	}

	return 0;
}
