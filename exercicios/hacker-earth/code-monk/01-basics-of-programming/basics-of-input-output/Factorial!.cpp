#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, f=1;
	cin >> n;
	
	for (int i=2; i<=n; i++)
		f *= i;
		
	cout << f << "\n";
	
	return 0;
}
