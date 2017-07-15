#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int v[n], m[n];
	
	for (int i=0; i<n; i++)
		cin >> v[i];
	
	for (int i=0; i<n; i++) {
		m[i] = v[i];
		if (i>0 and v[i-1])
			m[i]++;
		if (i<n-1 and v[i+1])
			m[i]++;
		cout << m[i] << "\n";
	}
	
	return 0;
}
