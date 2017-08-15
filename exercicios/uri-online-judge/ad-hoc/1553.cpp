#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, k, v[105], x;
	
	while (cin >> n >> k and (n or k)) {
		memset(v, 0, sizeof(v));
		int faq = 0;
		
		while (n--) {
			cin >> x;
			v[x]++;
		}
		
		for (int i=0; i<=100; i++)
			if (v[i] >= k)
				faq++;
				
		cout << faq << "\n";
	}

	return 0;
}
